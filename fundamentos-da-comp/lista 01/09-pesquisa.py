'''09: Uma empresa lançou um novo produto no mercado e fez uma pesquisa para saber
se os consumidores estavam satisfeitos, para isso eles deveriam responder sim 'S' ou
não 'N'. Crie um programa que leia a resposta de todas as pessoas e escreva a
porcentagem dos que disseram sim e dos que disseram não.
Obs.: O final da leitura de dados é marcado pela resposta 'F'.
'''
resS = 0
resN = 0

while True:
    res = input('Gostou[S/N]? ')
    if res == 'F':
        break
    if res == 'S':
        resS += 1
    if res == 'N':
        resN += 1
totalRes = resS + resN
print(f'{(resS/totalRes)*100:.2f}% gostaram e {(resN/totalRes)*100:.2f}% não')
