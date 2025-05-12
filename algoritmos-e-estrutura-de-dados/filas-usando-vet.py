def inicializa(q, capacidade):
    q['f'] = 0               # início da fila (front)
    q['r'] = 0               # fim da fila (rear)
    q['cap'] = capacidade    # capacidade da fila
    q['v'] = [None] * capacidade  # vetor da fila com posições alocadas

def esvazia(q):
    q['f'] = 0
    q['r'] = 0               # fim da fila (rear)

def vazia(q):
    return q['f'] == q['r'] == 0

def cheia(q, capacidade):
    return (q['r'] + 1) % q['cap'] == q['f']

def enfila(q, k):
    if cheia(q):
        print('Fila cheia')
        return None
    # Se a fila estiver vazia, inicializa os ponteiros f e r
    if vazia(q):
        q['f'] = 0
        q['r'] = 0
    else:
        # Atualiza o ponteiro de r de forma circular
        q['r'] = (q['r'] + 1) % q['cap']
    
    # Insere o valor na posição r
    q['v'][q['r']] = k

def frente(q):
    # Se a fila estiver vazia, retorna None ou um valor específico
    if vazia(q):
        return None
    
    # Retorna o elemento na frente da fila
    return q['v'][q['f']]

def desenfila(q):
    # Se a fila estiver vazia, retorna None ou valor específico
    if vazia(q):
        return None
    
    # Remove o elemento da frente da fila
    k = q['v'][q['f']]
    
    # Se o início for igual ao final, significa que há apenas um elemento, e a fila será esvaziada
    if q['f'] == q['r']:
        esvazia(q)
    else:
        # Atualiza o ponteiro de frente de forma circular
        q['f'] = (q['f'] + 1) % q['cap']
    
    # Retorna o valor removido
    return k

