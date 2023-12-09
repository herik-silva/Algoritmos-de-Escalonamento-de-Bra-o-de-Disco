#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

enum Code {
    EXIT_NUM = -1,
    EXIT_STR = 'S'
};

class FCFS {
    public:
        FCFS() {};
        ~FCFS() {};
        int execute(int startingCylinder, const vector<int>& requestList);
};

int FCFS::execute(int startingCylinder, const vector<int>& requestList) {
    int currentPosition = startingCylinder;
    int cost = 0;
    string route = to_string(currentPosition) + " ";

    for(int request : requestList){
        cost += abs(request - currentPosition);
        currentPosition = request;
        route += to_string(request) + " ";
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
    FCFS fcfsObject;
    bool isRunning = true, isReading = true;
    int cylinder, startingCylinder, total;

    cout << "Algoritmo FCFS" << endl;

    do{
        vector<int> requestList;
        do{
            cylinder = readInput<int>("Informe o cilindro (-1 para encerrar com entradas): ");
            isReading = cylinder != Code::EXIT_NUM;
            
            if(isReading)
                requestList.push_back(cylinder);

        }while(isReading);

        startingCylinder = readInput<int>("Informe o cilindro inicial: ");
        total = fcfsObject.execute(startingCylinder, requestList);

        cout << "Total de cilindros percorridos: " << total  << endl;
        
        isRunning = toupper(readInput<char>("Continuar execução? (S para continuar): ")) == Code::EXIT_STR;
    }while(isRunning);

    return 0;
}