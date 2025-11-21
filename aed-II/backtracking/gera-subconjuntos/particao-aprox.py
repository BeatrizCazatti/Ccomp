'''
total = soma de todos os elementos de C
msmp = maior soma da melhor partição encontrada até o momento
soma = soma dos elementos selecionados em S
dif = diferença, em valor absoluto entre total e o total dos elementos selecionados em S
Guarda() = função que guarda o conjunto S, relativo à melhor partição até o momento
'''
def Guarda():
    global best
    best = [C[i] for i in range(n) if S[i] == 1]

def PartAprox(ns, t):
    global soma, dif, msmp
    i = t

    while i < n and (soma + C[i]) < msmp:
        S[i] = 1
        soma += C[i]

        if abs(total - 2 * soma) < dif:
            Guarda()
            dif = abs(total - 2 * soma)
            msmp = max(soma, total - soma)

        PartAprox(ns + 1, i + 1)

        soma -= C[i]
        S[i] = 0
        i += 1

C = [7, 13, 17, 31, 38]
C.sort()

n = len(C)

S = [0] * n          
best = []           
total = sum(C)      

msmp = 0
dif = 0
soma = C[0]

S[0] = 1
Guarda()

dif = total - 2 * C[0]
msmp = max(C[0], total - C[0])

PartAprox(1, 1)

print(best)
print("soma:", sum(best))
print("outra soma:", total - sum(best))
print("dif:", abs((total - 2 * sum(best))))
