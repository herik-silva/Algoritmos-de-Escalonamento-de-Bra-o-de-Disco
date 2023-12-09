# Algoritmo de Escalonamento de Braço de Disco

## First-Come First-Served
O Algoritmo First-Come, First-Served (FCFS), conhecido como "Primeiro a chegar, primeiro a servir" em português, destaca-se por sua simplicidade no escalonamento de requisições. Seu funcionamento é regido por três princípios fundamentais:

- **Chegada de Requisições:** As requisições são tratadas na ordem de chegada, garantindo que a primeira a chegar seja a primeira a ser atendida.
- **Sem Priorização:** Não há consideração de prioridades entre as requisições. Todas são processadas estritamente com base na ordem de chegada, sem distinções.
- **Fila Única:** As requisições aguardam pacientemente em uma fila, seguindo uma abordagem de "primeiro a chegar, primeiro a servir". Cada requisição é atendida à medida que sua vez na fila chega, sem interrupções ou alterações na sequência.

### Como executar
Compile o arquivo FCFS_Simulator.cpp e, em seguida, execute o programa. Preencha a fila com as requisições dos cilindros e, em seguida, informe qual cilindro o braço do disco será posicionado. Ao fim da execução, será exibido o percurso e a quantidade de cilindros percorridos.

## Shortest Seek First
O Algoritmo Shortest Seek First (SSF), traduzido como "A Busca Mais Curta Primeiro", difere do First-Come, First-Served (FCFS) em sua abordagem para o escalonamento de requisições em um disco. Vamos explorar os princípios fundamentais que norteiam o funcionamento do SSF:

- **Busca pela Menor Distância:** O ponto central do SSF é a busca pela menor distância entre o cilindro atual e os cilindros solicitados. Ao contrário do FCFS, que segue a ordem de chegada, o SSF busca otimizar o tempo de busca do braço do disco, priorizando a requisição que está mais próxima do cilindro atual.

- **Priorização da Eficiência:** O SSF visa minimizar o tempo de busca total, percorrendo a menor distância possível entre os cilindros. Isso resulta em um desempenho potencialmente superior quando comparado ao FCFS, especialmente em situações em que as requisições não estão ordenadas por proximidade física.

- **Dinâmica de Execução:** O algoritmo SSF, durante a execução, ajusta dinamicamente a ordem de atendimento das requisições com base na busca pela menor distância, adaptando-se às mudanças na fila de requisições.

### Como executar
Compile o arquivo SSF_Simulator.cpp e, em seguida, execute o programa. Preencha a fila com as requisições dos cilindros e, em seguida, informe qual cilindro o braço do disco será posicionado. Ao fim da execução, será exibido o percurso e a quantidade de cilindros percorridos.