#04: Crie um programa que leia os nomes e os preços dos produtos de uma loja e que escreva o nome do produto mais caro. Considere que o final da lista é marcado pelo produto ‘XXX’ e que não existem preços repetidos.
maisCaro = []
listaNomeProdutos = []

while True:
    produto = input('Nome do produto: ')
    if produto == 'XXX':
        break
    preco = float(input('Preço: '))
    for n in produto:
        print(produto)
        