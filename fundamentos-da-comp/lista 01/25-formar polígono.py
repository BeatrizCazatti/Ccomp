#25: Crie um programa que leia N números inteiros positivos e responda se é possível formar um polígono com o mesmo. Dica: maior número < soma dos demais números.

lados = []
somaLados = 0
i = 1
while True:
    lado = int(input(f'lado {i}: '))
    if lado == 000:
        break
    lados.append(lado)
    i += 1

lados.sort()
for l in lados:
    somaLados += l

print(lados)
print(somaLados - lados[len(lados)-1])
if lados[len(lados)-1] < somaLados - lados[len(lados)-1]:
    print('É possível formar um polígono')
else:
    print('Não é possível')

