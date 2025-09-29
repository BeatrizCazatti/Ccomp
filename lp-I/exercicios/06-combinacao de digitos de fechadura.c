/*O esquema abaixo representa uma fechadura eletrônica. Suponha que estamos tentando adivinhar o segredo da fechadura e que viu de longe alguém digitando e conseguindo acesso. Só que para cada dígito visto, há uma chance de erro e o verdadeiro dígito pode ser o próprio número ou então um adjacente.

Escreva um algoritmo que a partir de um número inteiro com até 4 dígitos, gere e imprima todas as variações possíveis usando os próprios dígitos ou dígitos adjacentes aos informados na entrada do programa. Cada dígito adjacente pode ser um dígito vizinho na horizontal ou na vertical, conforme esquema abaixo:

┌───────┬───────┬───────┐

│    1  │   2   │   3   │

├───────┼───────┼───────┤

│   4   │   5   │   6   │

├───────┼───────┼───────┤

│   7   │   8   │   9   │

└───────┼───────┼───────┘

        │   0   │

        └───────┘

Dígitos e suas adjacências:

0: 8

1: 2 4

2: 1 3 5

3: 2 6

4: 1 5 7

5: 2 4 6 8

6: 3 5 9

7: 4 8

8: 0 5 7 9

9: 6 8

Atenção: o dígito 0 (zero) é significativo em qualquer posição. Nas combinações deve-se seguir a ordem de busca em profundidade e exibir sempre primeiro os dígitos originais em cada nível e depois os adjacentes, conforme exemplos abaixo:

 


Exemplos:

Entrada: 0 Saída: 0 8

Entrada: 1 Saída: 1 2 4

Entrada: 5 Saída: 5 2 4 6 8

Entrada: 11 Saída: 11 12 14 21 22 24 41 42 44

Entrada: 05 Saída: 05 02 04 06 08 85 82 84 86 88

Entrada: 740 Saída: 740 748 710 718 750 758 770 778 440 448 410 418 450 458 470 478 840 848 810 818 850 858 870 878

Entrada: 0123

Output: 0123 0122 0126 0113 0112 0116 0133 0132 0136 0153 0152 0156 0223 0222 0226 0213 0212 0216 0233 0232 0236 0253 0252 0256 0423 0422 0426 0413 0412 0416 0433 0432 0436 0453 0452 0456 8123 8122 8126 8113 8112 8116 8133 8132 8136 8153 8152 8156 8223 8222 8226 8213 8212 8216 8233 8232 8236 8253 8252 8256 8423 8422 8426 8413 8412 8416 8433 8432 8436 8453 8452 8456

 */