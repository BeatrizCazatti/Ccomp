def inicializa(s, capacidade):
    s['topo'] = 0
    s['capacidade'] = capacidade
    s['v'] = [None] * capacidade

def esvazia(s):
    s['topo'] = 0

def vazia(s):
    return s['topo'] == 0

def cheia(s):
    return s['topo'] == s['capacidade']

#inserção
def push(s, k):
    if cheia(s):
        print('Pilha cheia')
    s['topo'] = s['topo'] + 1
    s['v'][s['topo']] = k

def pop(s):
    if vazia(s):
        print('Pilha vazia')
        return None
    s['topo'] -= 1
    return s['v'][s['topo']]

def top(s):
    if vazia(s):
        return 'Pilha vazia'
    return s['v'][s['topo']]

pilha = {}
v = inicializa(pilha, 4)
v = push(v, 6)