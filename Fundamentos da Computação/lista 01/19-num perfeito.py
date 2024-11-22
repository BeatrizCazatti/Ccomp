#19: Crie um programa que leia um número N e imprima se ele é perfeito ou não. Um número é perfeito quando a soma dos seus divisores é igual a ele mesmo, e.g., 6 = 3 + 2 + 1.

n = int(input('Digite um número: '))
divisores = []
somaDivisores = 0
#é divisor?
for i in range(1, n):
    if n%i == 0:
        divisores.append(i)
        
#soma a lista de divisores
for c in divisores:
    somaDivisores += c

if somaDivisores == n:
    print(f'{n} é um nº perfeito.')