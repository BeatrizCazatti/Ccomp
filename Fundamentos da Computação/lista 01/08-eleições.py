#08: Crie um programa que apure os votos de uma eleição municipal, numa cidade com 20.000 eleitores, onde concorreram quatro candidatos. Um servidor da Justiça Eleitoral digitará cada voto individualmente. Cada voto equivale a um número inteiro. Os votos válidos podem ser 1, 2, 3 e 4, e estão relacionados aos seguintes candidatos: 1 – João da Silva; 2 – José Ramalho; 3 – Maria Mattos; e 4 – Pedro Américo. Votos com o valor 0 devem ser contabilizados como votos em branco, e votos com qualquer outro valor (além de 0, 1, 2, 3 e 4), devem ser considerados votos nulos. Calcule e escreva o total de votos de cada candidato, o total de votos brancos e o total de votos nulos.

print('1 - João da Silva')
votosJS = 0
print('2 - José Ramalho')
votosJR = 0
print('3 - Maria Mattos')
votosMM = 0
print('4 - Pedro Américo')
votosPA = 0
print('0 - VOTOS BRANCOS')
votosB = 0
votosN = 0
n = 0

while True:
    #for n in range(0, 20000):
    voto = int(input(f'Eleitor {n+1} votou:'))
    if voto == 999:
        break
    n += 1
    match voto:
        case 0:
            votosB += 1
        case 1:
            votosJS += 1
        case 2:
            votosJR += 1
        case 3:
            votosMM += 1
        case 4:
            votosPA += 1
        case _:
            votosN += 1
        
print(f'Tiveram {votosN} votos nulos')
print(f'Tiveram {votosB} votos em branco')
print(f'Tiveram {votosJS} votos para José da Silva')
print(f'Tiveram {votosJR} votos para José Ramalho')
print(f'Tiveram {votosMM} votos para Maria Matos')
print(f'Tiveram {votosPA} votos para Pedro Américo')
