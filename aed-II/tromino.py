import numpy as np
n = int(input())
x = int(input())
y = int(input())
m = []

#matriz colorida           
# for i in range(1, n+1):
#     for j in range(1, n+1):
#         if(i == x and j == y):
#             print(f"\033[0;30;42m({i}, {j})\033[m", end='')
#         else:
#             print(f"\033[0;30;41m({i}, {j})\033[m", end='')
#     print()


#cria matriz
def cria_matriz(m, n):
    for i in range(1, n+1):
        linha = []
        for j in range(1, n+1):
            if(i == x and j == y):
                linha.append(1)
            else:
                linha.append(0)
        m.append(linha)

cria_matriz(m, n)

#imprime matriz 
def imprime_matriz(m, n):   
    for i in range(n):
        print(m[i])
    
imprime_matriz(m, n)
    
def tromino(m, n, x, y):
    mid = int(n / 2)
    print(f'mid={mid}')
    if(x <= mid and y > mid):
        print('1Q')
        m[mid][mid] = 2
    if(x <= mid and y <= mid):
        print('2Q')
        m[mid][mid] = 2
    if(x > mid and y <= mid):
        print('3Q')
        m[mid][mid] = 2
        
    if(x > mid and y > mid):
        print('4Q')
        m[mid][mid-1] = 2
        m[mid-1][mid-1] = 2
        m[mid-1][mid] = 2

tromino(m, n, x, y)
imprime_matriz(m, n)
#def colocar_tromino(mid):
    