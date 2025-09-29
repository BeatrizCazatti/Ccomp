#02: Crie um programa que escreva os N primeiros termos de uma progressão aritmética (PA). O primeiro termo e a razão da PA devem ser informados pelo usuário.

a1 = int(input('a1: '))
r = int(input('r: '))
n = int(input('n: '))

for ai in range(a1, n+1, r):
    print(ai)