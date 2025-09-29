class No:
  def __init__(self, c, dados=None, prox=None):
    self.dados = dados
    self.c = c
    self.prox = prox

class ListaEncadeada:
  def __init__(self):
    self.cab = None

ll = ListaEncadeada()
ll.cab = No(1, {'rótulo1': 'dados1', 'rótulo2': 'dados2'}, None)
ll.cab.prox= No(2,{'rótulo1': 'dados3', 'rótulo2': 'dados4'},None)
ll.cab.prox.prox= No(3,{'rótulo1': 'dados5', 'rótulo2': 'dados6'}, None)

p = ll.cab
while(p != None):
  print(f'c: {p.c} dados: {p.dados}')
  p = p.prox

# def cria_lista_encadeada():
#   le = ListaEncadeada()
#   for i in range(4, 6):
#     conteudo = input(f"dados de {i}º nó: ")
#     le.cab = No(i, {conteudo}, None)
#     p = p.prox
  
# cria_lista_encadeada()
#print(ll.cab.c)
# print(ll.cab.prox.c)
# print(ll.cab.dados)
# print(ll.cab.prox == None)
# print(ll.cab.prox.prox == None)
# print(ll.cab.prox.prox.dados)
