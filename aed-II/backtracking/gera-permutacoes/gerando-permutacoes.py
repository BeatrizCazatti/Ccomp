def perm(np):
    for i in range(n):
        if not S[i]:
            P[np] = i + 1
            S[i] = True

            if np == n - 1:
                print(P)
            else:
                perm(np + 1)
            
            S[i] = False


n = 3
P = [0] * n
S = [False] * n

perm(0)
'''
1. Escolhe um número livre e põe em P[np]
2. Marca esse número como usado
3. Se completou P -> imprime
4. Senão -> chama Perm(np+1)
5. Ao voltar -> desmarca o número (backtrack)
6. Testa próximo número
'''