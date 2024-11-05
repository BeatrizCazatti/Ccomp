#15: Crie um programa que: 
#   a) Leia e escreva o nome e a altura das moças inscritas em um concurso de beleza, até que seja digitada o nome ‘MARIA’, que marca o final da lista, mas é para ser computada no concurso. 
#   b) Calcule e escreva as duas maiores alturas e quantas moças as possuem.
alturas = []
maiores = []

while True:
    nome = input('Nome: ')
    altura = input('Altura: ')
    alturas.append(altura)
    listaOrdenada = alturas[:]
    listaOrdenada.sort(reverse=True)
    for n in range(0, 2):
        while listaOrdenada[n] == listaOrdenada[n+1]:
            print(listaOrdenada[n])

    if nome.upper() == "MARIA":
        break
print(listaOrdenada)