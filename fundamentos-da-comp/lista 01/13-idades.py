#13: Crie um programa que:
#    a) Leia a idade de várias pessoas. O final da lista contém o valor da idade igual a -1 que não deverá ser computado.
#    b) Calcule e mostre a idade média desse grupo de indivíduos. Escreva também a porcentagem de pessoas entre 21 e 65 anos inclusive.
total = 0 
somaIdades = 0
faixa = 0

while True:
    idade = int(input('Idade: '))
    if idade == -1:
        break
    total += 1
    somaIdades += idade
    if 21<=idade<=65:
        print('na faixa')
        faixa += 1

print(f'A idade média dessas {total} pessoas é {somaIdades/total:.2f} anos.')
print(f'Porcentagem de pessoas entre 21 e 65 anos é {(faixa/total)*100}%')
