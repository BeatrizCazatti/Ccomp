def parentisadaPR(sin):
    n = len(sin)
    s = [''] * n  # pilha para operadores
    topo = -1

    sout = [''] * n
    contOut = -1

    for i in range(n):
        token = sin[i]

        if isinstance(token, int):  # se for operando
            contOut += 1
            sout[contOut] = token

        elif token in '+-*/':
            topo += 1
            s[topo] = token

        elif token == ')':
            if topo >= 0:
                op = s[topo]
                topo -= 1
                contOut += 1
                sout[contOut] = op

    return sout[:contOut + 1]

entrada = ['(', 25, '/', '(', '(', '(', 6, '/', 3, ')', '-', 3, ')', '-', '(', 2, '*', '(', 4, '-', 2, ')', ')', ')', ')']
print(parentisadaPR(entrada))
