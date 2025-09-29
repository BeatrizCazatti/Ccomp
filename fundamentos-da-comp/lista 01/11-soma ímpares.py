#11-Crie um programa que calcule a soma dos N primeiros números inteiros ímpares e positivos. O valor de N deve ser lido do usuário.

n = int(input('Número: '))
soma = 0

for i in range(0, n+1):
    if i%2 != 0:
        soma += i
print(f'A soma dos {n} primeiros números ímpares é {soma}')