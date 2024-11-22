#02: Leia um vetor de 40 posições e conte quantos elementos pares se encontram no vetor.

vetor = []
numPar = 0

for c in range(0, 4):
    num = int(input(f'Elemento {c+1} do vetor: '))
    vetor.append(num)
    if num % 2 == 0:
        numPar += 1

print(vetor)
print(f'Existem {numPar} elemntos pares nesse vetor.')