#04: Crie um programa que leia os nomes e os preços dos produtos de uma loja e que escreva o nome do produto mais caro. Considere que o final da lista é marcado pelo produto ‘XXX’ e que não existem preços repetidos.
maisCaro = ['', 0]
listaNomeProdutos = []

while True:
    ok = True
    produto = input('Nome do produto: ')
    if produto == 'XXX':
        break

    for n in range(0, len(listaNomeProdutos)):
        if listaNomeProdutos[n] == produto:
            print('Esse produto já foi registrado!')
            ok = False
    if ok:
        listaNomeProdutos.append(produto)
        preco = float(input('Preço: '))
        if preco > maisCaro[1]:
            maisCaro = [produto, preco]
print(f'O mais caro é {maisCaro[0]} que custa {maisCaro[1]}')