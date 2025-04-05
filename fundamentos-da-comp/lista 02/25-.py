#25: Escreva um programa para converter números inteiros, menores do que 4000 e escritos em algarismos arábicos, para romanos. Observação: evite escrever mais do que nove “if”s.
### Dicas:
# - A ideia é usar um comando while para analisar cada casa decimal e gerar os caracteres romanos diferentemente para cada iteração.
# - Use uma string ou um dicionário para armazenar as letras correspondentes a cada casa decimal.
#
### Exemplo: 1666 corresponde a string "MDCLXVI", onde:
#   as letras nas posições 5 e 6 correspondem às unidades (VI),
#   as letras nas posições 3 e 4 correspondem às dezenas (LX),
#   as letras nas posições 1 e 2 correspondem às centenas (DC),
#   a letra na posição 0 corresponde aos milhares (M).