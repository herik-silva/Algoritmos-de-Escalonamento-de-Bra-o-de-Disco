# Algoritmo de Escalonamento de Braço de Disco

## First-Come First-Served
O Algoritmo First-Come, First-Served (FCFS), conhecido como "Primeiro a chegar, primeiro a servir" em português, destaca-se por sua simplicidade no escalonamento de requisições. Seu funcionamento é regido por três princípios fundamentais:

- **Chegada de Requisições:** As requisições são tratadas na ordem de chegada, garantindo que a primeira a chegar seja a primeira a ser atendida.
- **Sem Priorização:** Não há consideração de prioridades entre as requisições. Todas são processadas estritamente com base na ordem de chegada, sem distinções.
- **Fila Única:** As requisições aguardam pacientemente em uma fila, seguindo uma abordagem de "primeiro a chegar, primeiro a servir". Cada requisição é atendida à medida que sua vez na fila chega, sem interrupções ou alterações na sequência.

### Como executar
Compile o arquivo FCFS_Simulator.cpp e, em seguida, execute o programa. Preencha a fila com as requisições dos cilindros e, em seguida, informe qual cilindro o braço do disco será posicionado. Ao fim da execução, será exibido o percurso e a quantidade de cilindros percorridos.