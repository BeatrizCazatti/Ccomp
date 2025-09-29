#20: Crie um programa que imprima os 4 primeiros números perfeitos.
numPerfeito = 4

for n in range(1, numPerfeito):
    print(n)
    divisores = []
    somaDivisores = 0

    #é divisor?
    for c in range(1, n):
        if n%c == 0:
            divisores.append(c)
            
    #soma a lista de divisores
    for c in divisores:
        somaDivisores += c

    if somaDivisores == n:
        print(f'{n} é um nº perfeito.')
        numPerfeito -= 1