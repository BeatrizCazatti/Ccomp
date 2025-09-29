#17: Crie um programa que leia um número N e verifique se ele é primo.

n = int(input('Digite um número: '))

for i in range(2, n):
    if n%i == 0:
        print(f'{n} não é primo.')
        break
    elif i == n-1:
        print(f'{n} é primo.')
