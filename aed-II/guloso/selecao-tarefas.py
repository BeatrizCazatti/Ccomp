'''Dadas n tarefas com datas de início e fim ( c1, f1),(c2, f2), ...(cn, fn), determinar o máximo de tarefas que podem ser executadas por 1 processador.
'''
def selecionaTarefas(T, n):
    r = S[0][1] 
    for i in range(1, n):
        if T[i][0] > r:
            S.append(T[i])
            r = T[i][1]
    return S


T = [[1, 14], [10, 13], [2, 3], [2, 6], [9, 11], [12, 15], [5, 8], [7, 8]]
T = sorted(T, key=lambda tarefa: tarefa[1])
print(T)
n = len(T)
S = [T[0]]
print(selecionaTarefas(T, n))