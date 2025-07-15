def convIntG(num):
    B = [0] * 8
    if num > 0:
        B[0] = 1
    else:
        B[0] = -1
        num = -num
    
    for i in range(len(B) - 1, 0, -1):
        B[i] = num % 10
        num = num // 10
    return B

def prodIntG(B, k):
    if k <= 0:
        B[0] = -B[0]
        k = -k
    v1 = 0
    for i in range(len(B) - 1, 0, -1):
        x = B[i]*k + v1
        B[i] = x % 10
        v1 = x // 10
    return B
# print(convIntG(-450))
# print(prodIntG(convIntG(-450), 2))


def somaIntG(B1, B2):
    n = len(B1)
    B3 = [0] * n
    B3[0] = 1  # resultado também é positivo
    v1 = 0     # vai-um da soma

    for i in range(n - 1, 0, -1):
        x = B1[i] + B2[i] + v1
        B3[i] = x % 10
        v1 = x // 10

    # se sobrou vai-um, pode ignorar ou imprimir um aviso
    # já que o vetor B3 tem tamanho fixo
    if v1 != 0:
        print("Overflow: resultado maior que o vetor.")

    return B3
# Representando 1234 como vetor com 8 posições
B1 = [1, 0, 0, 0, 0, 1, 2, 3, 4]
B2 = [1, 0, 0, 0, 0, 0, 0, 6, 6]  # Representa 66
print(somaIntG(B1, B2))  # Espera-se 1300 → [1, 0, 0, 0, 0, 1, 3, 0, 0]



def difIntG(B1, B2):
    n = len(B1)
    B3 = [0] * n
    B3[0] = 1  # sinal positivo assumido
    v1 = 0     # "pega emprestado" (vai-um negativo)

    for i in range(n - 1, 0, -1):
        x = B1[i] - B2[i] - v1
        if x < 0:
            x += 10
            v1 = 1
        else:
            v1 = 0
        B3[i] = x

    if v1 != 0:
        print("Aviso: B1 < B2 — resultado seria negativo (não tratado).")

    return B3
B1 = [1, 0, 0, 0, 5]  # 00005
B2 = [1, 0, 0, 0, 2]  # 00002
print(difIntG(B1, B2))  # Saída: [1, 0, 0, 0, 3]


def prodIntG(B, k):  # (reaproveitada)
    if k <= 0:
        B[0] = -B[0]
        k = -k
    v1 = 0
    for i in range(len(B) - 1, 0, -1):
        x = B[i] * k + v1
        B[i] = x % 10
        v1 = x // 10
    return B
B = [1, 0, 0, 0, 5]  # 00005
k = 3
print(prodIntG(B, k))  # Saída: [1, 0, 0, 1, 5]


def potIntG(B, exp):
    n = len(B)
    R = [0] * n
    R[0] = 1
    R[-1] = 1  # Inicializa R como 1

    for _ in range(exp):
        R = prodIntG(R[:], int("".join(map(str, B[1:]))))  # usa cópia de R
    return R

B = [1, 0, 0, 0, 2]  # 00002
exp = 3
print(potIntG(B, exp))  # Deve dar 8


