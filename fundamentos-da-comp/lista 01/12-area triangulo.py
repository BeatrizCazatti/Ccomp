#12: Crie um programa para calcular a área de um triângulo qualquer, considerando que são fornecidos os comprimentos dos seus lados. Esse programa não pode permitir a entrada de dados inválidos, ou seja, medidas menores ou iguais a 0.

#usando a fórmula de heron(formula12.png)
import math 

a = int(input('Lado A: '))
b = int(input('Lado B: '))
c = int(input('Lado C: '))

if a <= 0 or b <= 0 or c <= 0:
    print('Digite um valores válidos!')

s = (a + b + c) / 2
area = math.sqrt(s*(s-a)*(s-b)*(s-c))

print(f'{area:.3}')
