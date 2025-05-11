def inverteVetor(V):
    # Pilha usando lista
    pilha = []
    
    # Inserindo todos os elementos do vetor na pilha
    for i in range(len(V)):
        pilha.append(V[i])  # push
        
    # Retirando os elementos da pilha e reatribuindo no vetor
    for i in range(len(V)):
        V[i] = pilha.pop()  # pop

    return V

def inverteVetor(V):
    n = len(V)
    pilha = [0] * n  # cria um vetor para simular a pilha
    topo = -1        # pilha vazia

    # Push manual: empilha os elementos
    for i in range(n):
        topo += 1
        pilha[topo] = V[i]

    # Pop manual: desempilha e coloca de volta no vetor
    for i in range(n):
        V[i] = pilha[topo]
        topo -= 1

    return V

# Exemplo de uso
V = [1, 2, 3, 4, 5]
print("Original:", V)
V = inverteVetor(V)
print("Invertido:", V)
