#12: Crie um programa para calcular a área de um triângulo qualquer, considerando que são fornecidos os comprimentos dos seus lados. Esse programa não pode permitir a entrada de dados inválidos, ou seja, medidas menores ou iguais a 0.

ladoA = int(input('Lado A: '))
ladoB = int(input('Lado B: '))
ladoC = int(input('Lado C: '))

if ladoA <= 0 or ladoB <= 0 or ladoC <= 0:
    print('Digite um valores válidos!')
