#04: Ler um vetor de números inteiros de 30 posições. Depois, ler um número inteiro X, imprimir quantas vezes o número X aparece no vetor.
vetor = []
count = 0

for i in range(0, 3):
    num = int(input("Elemento do vetor: "))
    vetor.append(num)

numX = int(input('Procurar número: '))

for i in vetor:
    if i == numX:
        count += 1
print(vetor)
print(f'O número {numX} aparece {count} vezes.')
