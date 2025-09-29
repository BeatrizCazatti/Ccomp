#05:Crie um programa que leia a descrição, o preço unitário e a quantidade de 10 produtos comprados por uma empresa. Ao final deve ser escrito o total gasto pela empresa e a descrição do produto mais caro.

produto = {'descrição': '', 'precoUnitario': 0, 'quantidade': 0}
listaProdutos = {}
totalGasto = 0
gastoProduto = 0
maisCaro = ['',0]

for n in range(0, 10):
    produto['descrição'] = input('Descrição: ')
    if produto['descrição'] == 'XXX':
        break
    produto['precoUnitario'] = input('Preço Unitário: ')
    produto['quantidade'] = input('Quantidade: ')

    gastoProduto = int(produto['precoUnitario'])*int(produto['quantidade'])
    totalGasto += gastoProduto
    if gastoProduto > maisCaro[1]:
        maisCaro[0] = produto['descrição']
        maisCaro[1] = gastoProduto

    listaProdutos[f'item{n}'] = produto['descrição'], produto['precoUnitario'], produto['quantidade']

print(f'Total: {totalGasto}')
print(f'O mais caro é o "{maisCaro[0]}" que custa {maisCaro[1]}')

