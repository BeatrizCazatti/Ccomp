#05: Leia um vetor de 16 posições e troque as 8 primeiras posições pelas 8 últimas posições. Imprima o vetor original e o vetor trocado.

vetorOriginal = []
vetorTrocado = []

for c in range(0, 8):
    num = int(input(f'Elemento {c+1} do vetor: '))
    vetorOriginal.append(num)

for j in range(7, 4-1, -1):
    vetorTrocado.append(vetorOriginal[j])
for j in range(3, 0-1, -1):
    vetorTrocado.append(vetorOriginal[j])

print(vetorOriginal)
print(vetorTrocado)