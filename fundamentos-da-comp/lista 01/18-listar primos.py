#18: Crie um programa que leia um número N e imprima os N primeiros números primos.

n = int(input('N: '))
primo = False
print(1)

for c in range(3, n+1):
    #todos os números de 1 a N
    #é primo?
    for i in range(2, c):
        if c%i == 0:
            primo = False
            break
        elif i == c-1:
            primo = True
    if primo == True:
        print(c)
            