def leMat(M, lin, col):
    for i in range(0,lin):
        M.append([])
        for j in range(0,col):
            texto = '['+str(i)+']['+str(j)+']:'
            M[i].append(int(input(texto)))