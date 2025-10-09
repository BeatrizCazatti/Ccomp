def buscaBinaria(lista, alvo):
    esquerda, direita = 0, len(lista) - 1

    while esquerda <= direita:
        meio = (esquerda + direita) // 2
        chute = lista[meio]

        if chute == alvo:
            return meio
        if chute > alvo:
            direita = meio - 1
        else:
            esquerda = meio + 1

    return -1

print(buscaBinaria([1, 3, 5, 7, 9], 9))