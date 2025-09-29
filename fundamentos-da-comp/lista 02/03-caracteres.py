#03: Leia uma frase e imprima o total de vogais, o total de brancos e o total do resto.

frase = str(input('Digite uma frase:')).upper()
#.strip() para retirar espaços antes e no final da string
#.join() para juntar uma lista de strings em uma única string
print(frase)
numEspaços = 0
numVogais = 0

for l in frase:
    if l == " ":
        numEspaços += 1
    if l=='A' or l=='E' or l=='I' or l=='O' or l=='U':
        numVogais += 1

listaPalavras = frase.split()
letras = ''.join(listaPalavras)

numResto = len(letras) - numVogais

print(f'Essa frase tem {numVogais} vogais')
print(f'Essa frase tem {numEspaços} espaços')
print(f'Essa frase tem {numResto} resto(s)')

