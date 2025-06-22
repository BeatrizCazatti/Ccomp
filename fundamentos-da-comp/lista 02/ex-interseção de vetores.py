vetA = []
vetB = []
vetC = []
num = int(input("Elemento do vetor A: "))
while num >= 0:
    vetA.append( num )
    num = int(input("Elemento do vetor A: "))

num = int(input("Elemento do vetor B: "))
while num >= 0:
    vetB.append( num )
    num = int(input("Elemento do vetor B: "))

for i in range(0,len(vetA)):
    for j in range(0,len(vetB)):
        if vetA[i] == vetB[j]:
            vetC.append(vetA[i])

print('Primeiro vetor:', vetA)
print('Segundo vetor:', vetB)
print('Vetor interseção:', vetC)