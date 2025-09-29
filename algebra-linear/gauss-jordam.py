ordem = int(input("Digite a ordem da matriz quadrada: "))
matriz = []

print(f"A matriz inversa é: {ordem}")
#input matriz_ampliada
for i in range(ordem):
    linha = []
    for j in range(ordem):
        linha.append(input(f"[{i}][{j}]"))
    matriz.append(linha)

#print da matriz inversa
for i in range(ordem):
    for j in range(ordem):
        print(f" {matriz[i][j]} ", end='')
    print()


#def calcula_determinante (matriz):
    