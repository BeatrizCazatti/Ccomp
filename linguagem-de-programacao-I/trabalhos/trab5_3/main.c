/*Escreva um programa organizado em múltiplos arquivos que calcule de forma recursiva o produto escalar entre dois vetores. Os vetores devem ser lidos a partir de arquivos texto e terão  um número indeterminado de elementos. Seu programa deve calcular o produto escalar de forma recursiva do último para primeiro elemento do vetor. Os arquivos de entrada possuem o seguinte formato: a primeira linha contém o número de elementos do vetor; cada uma das demais linhas do arquivo contém um número real referente a um dos elementos do vetor em ordem a partir do elemento com índice 0.

Condições de erro:

No caso dos vetores terem tamanho diferente seu programa deve apresentar a mensagem de erro "Erro: os vetores possuem comprimentos distintos\n".

No caso de algum arquivo ser inexistente, seu programa deve imprimir "Erro: arquivo nomeDoArquivo não foi encontrado\n".

Em caso do arquivo estar incompleto, seu programa deve informar "Erro: arquivo nomeDoArquivo está corrompido.\n"

No caso de problemas para fechar o arquivo, o programa deve informar "Erro: arquivo nomeDoArquivo não pôde ser fechado.\n"

   

- Organização do programa:

vetinput.h e vetinput.c:
     Respectivamente o protótipo e a implementação das funções responsáveis pela leitura do arquivo texto e a criação do array. O nome do arquivo deve necessariamente ser um parâmetro da função e o array lido deve ser um parâmetro de retorno. Retornar NULL indica ter havido algum problema neste processo.

 

escalar.h e escalar.c:
    Respectivamente o protótipo e a implementação da função recursiva que calcula o produto escalar.

 

main.c:
    Programa principal que lê o nome dos dois arquivos (um de cada vez), lê os vetores, calcula o produto escalar e apresenta o resultado com 3 casas decimais.

 

   Atenção, a função do cálculo do produto escalar deverá ser recursiva.*/