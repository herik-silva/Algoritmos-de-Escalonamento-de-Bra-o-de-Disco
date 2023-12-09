#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

enum Code {
    EXIT_NUM = -1,
    EXIT_STR = 'S'
};

class SSF {
    public:
        SSF() {};
        ~SSF() {};

        int execute(int startingCylinder, vector<int> requestList);

    private:
        int shortestDistance(int currentPosition, const vector<int>& requestList);
};

int SSF::shortestDistance(int currentPosition, const vector<int>& requestList) {
    int smaller = abs(currentPosition - *max_element(requestList.begin(), requestList.end())) + 1;
    int minorIndex = 0;
    int distance = 0;

    for(int index=0; index<requestList.size(); index++){
        distance = abs(requestList[index] - currentPosition);
        if(distance < smaller){
            smaller = distance;
            minorIndex = index;
        }
    }

    return minorIndex;
}

int SSF::execute(int startingCylinder, vector<int> requestList) {
    int cost = 0;
    int currentPosition = startingCylinder;
    int minorIndex = -1;
    string route = to_string(currentPosition) + " ";

    while(!requestList.empty()) {
        minorIndex = shortestDistance(currentPosition, requestList);

        if (!requestList.empty()) {
            cost += abs(requestList[minorIndex] - currentPosition);
            currentPosition = requestList[minorIndex];
            route += to_string(currentPosition) + " ";

            for(int auxIndex=minorIndex; auxIndex<requestList.size(); auxIndex++){
                requestList[auxIndex] = requestList[auxIndex+1];
            }

            requestList.resize(requestList.size()-1);
        }
    }

    cout << "Percurso: " << route << endl;

    return cost;
}

template <typename T>
T readInput(string message) {
    T inputValue;

    cout << message;
    cin >> inputValue;
    
    return inputValue;
}

int main() {
    SSF SSFObject;
    bool isRunning = true, isReading = true;
    int cylinder, startingCylinder, total;
    cout << "Algoritmo SSF" << endl;

    do{
        vector<int> requestList;
        do{
            cylinder = readInput<int>("Informe o cilindro (-1 para encerrar com entradas): ");
            isReading = cylinder != Code::EXIT_NUM;
            if(isReading){
                requestList.push_back(cylinder);
            }
        }while(isReading);

        startingCylinder = readInput<int>("Informe o cilindro inicial: ");
        
        total = SSFObject.execute(startingCylinder, requestList);

        cout << "Total de cilindros percorridos: " << total  << endl;
        
        isRunning = toupper(readInput<char>("Continuar execução? (S para continuar): ")) == Code::EXIT_STR;
    }while(isRunning);

    return 0;
}