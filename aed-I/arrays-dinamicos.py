def inicializa():
    return [0], 1, 0  # dados, capacidade, tamanho

def realoca(dados, capacidade):
    nova_cap = capacidade * 2
    novo_dados = [0] * nova_cap
    for i in range(capacidade):
        novo_dados[i] = dados[i]
    #print(f"→ Realocação: capacidade = {nova_cap}")
    return novo_dados, nova_cap

def insere(dados, capacidade, tamanho, valor):
    if tamanho == capacidade:
        dados, capacidade = realoca(dados, capacidade)
    dados[tamanho] = valor
    tamanho += 1
    #print(f"Inserido '{valor}': capacidade = {capacidade}, tamanho = {tamanho}, dados = {dados[:tamanho]}")
    return dados, capacidade, tamanho

def deleta(dados, capacidade, tamanho):
    if tamanho > 0:
        removido = dados[tamanho - 1]
        tamanho -= 1
     #   print(f"← Deletado '{removido}': capacidade = {capacidade}, tamanho = {tamanho}, dados = {dados[:tamanho]}")
    return dados, capacidade, tamanho

def constroi(LN):
    dados, capacidade, tamanho = inicializa()
    for i in range(1, 15):  # de 1 a 14
        dados, capacidade, tamanho = insere(dados, capacidade, tamanho, LN[i])
    return dados[:tamanho]

# Simula LN[1..14], com LN[0] não usado
LN = [0] + list("BEATRIZCAZATTI")
resultado = constroi(LN)
print("\n🔚 Resultado final:", resultado)
