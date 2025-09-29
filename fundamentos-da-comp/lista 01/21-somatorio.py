#21: Crie um programa que leia um número N e calcule:
# O somatório 1/i, de i até n, onde i=1

n = int(input('N: '))
somatorio = 0

for i in range(1, n+1):
    somatorio += 1/i

print(f'O somatório é aproximadamente {somatorio:.3}')