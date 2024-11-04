#14: Num frigorífico existem 90 bois. Cada boi traz preso em seu pescoço um cartão contendo seu número de identificação e seu peso. Crie um programa que escreva o número e peso do boi mais gordo e do boi mais magro. Além disso, responda: se houver dois ou mais bois com o mesmo peso, maior que todos os demais, este algoritmo escreverá o número de qual deles? 

#Do primeiro, que irá 'atualizar' a variável, só quando for maior e não igual. A não ser que seja uma lista, podendo receber mais de um boi >=.

bois = [500, 380, 550, 330, 400, 450, 570, 320, 440]
#o número de identificação do boi é o index da tupla, caso sejam números diferentes deve se criar um dicionário

magro = [0, bois[0]]
gordo = [0, bois[0]]
for n, peso in enumerate(bois):
    print(f'peso do boi {n+1}º é {peso}Kg')
    if bois[n] < magro[1]:
        print(f'o boi{n} é mais magrinho')
        magro = [n+1, bois[n]]
    if bois[n] > gordo[1]:
        print(f'o boi{n} é mais pesadinho')
        gordo = [n+1, bois[n]]

print(f'O mais leve é o nº{magro[0]} com {magro[1]}Kg')
print(f'O mais leve é o nº{gordo[0]} com {gordo[1]}Kg')
    
