def resultado(op1, op2, operador):
    if operador == '+':
        return op1 + op2
    elif operador == '-':
        return op1 - op2
    elif operador == '*':
        return op1 * op2
    elif operador == '/':
        return op1 // op2 
    

def calculoPolonesaReversa(sin):
    n = len(sin)
    s = [0] * n  # vetor para simular a pilha
    topo = -1    # pilha vazia

    for i in range(n):
        token = sin[i]
        if isinstance(token, int):
            # Push manual
            topo += 1
            s[topo] = token
        else:
            # Pop manual
            op2 = s[topo]
            topo -= 1
            op1 = s[topo]
            topo -= 1
            # Calcula e empilha o resultado
            res = resultado(op1, op2, token)
            print(f'{i}: {res}')
            topo += 1
            s[topo] = res

    return s[topo]

# Exemplo: expressão "25 2 3 - 2 4 6 3 / - * - /" = -5
expressao = [25, 2, 3, '-', 2, 4, 6, 3, '/', '-', '*', '-', '/']
print("Resultado:", calculoPolonesaReversa(expressao)),

