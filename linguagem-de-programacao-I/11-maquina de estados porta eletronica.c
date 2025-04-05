/*Máquina de estados Porta eletrônica
Condições de conclusão
 Descrição
 Enviar
 Editar
 Visualizar envios
 Número máximo de arquivos: 1
Tipo de trabalho:  Trabalho individual
 

 

Escreva um algoritmo que implemente um sistema de fechadura eletrônica de porta. A fechadura da porta tem três estados: TRANCADA, DESTRANCADA e ERRO. A fechadura da porta deve transitar entre os estados com base na entrada do usuário:

- Quando a fechadura está TRANCADA, ela espera que o usuário digite a senha correta.

- Se o usuário inserir a senha correta, a fechadura passará para o estado DESTRANCADA.

- Se o usuário inserir a senha errada três vezes, a fechadura mudará para o estado ERRO. Para sair do estado ERRO, o usuário deve responder ‘S’ para resetar estados.

Quando estiver no estado DESTRANCADA, o sistema perguntará se o usuário deseja trancar a porta, fornecendo as opções ‘s’ ou ‘n’, representando “Sim” e “Não respectivamente”. Caso seja informado ‘s’ (sim), o sistema transitará para o estado TRANCADA, caso contrário, repete a pergunta.

Seu programa deve simular o comportamento do sistema de fechadura da porta, recebendo a entrada do usuário para a senha e manipulando as transições de estado de acordo com o diagrama abaixo.

A senha correta para este exercício deve ser definida como 1234. 0 (zero) permite sair do programa em qualquer estado.

 

Se errar a senha, o algoritmo deve exibir a mensagem abaixo, onde n representa o número de tentativas restantes:

Senha inválida. Tentativas restantes: n

 

Ao errar a senha 3 vezes seguidas, deve ser exibida a mensagem abaixo:

ERRO

Com a porta no estado ERRO, o programa aguardará que o usuário informe ‘S’ para transitar para o estado TRANCADA.

 

Ao informar a senha correta e destrancar a porta, a seguinte mensagem deve ser exibida:

DESTRANCADA

 

Com a porta no estado DESTRANCADA, o programa aguardará que o usuário informe ‘S’ para transitar para o estado TRANCADA.*/