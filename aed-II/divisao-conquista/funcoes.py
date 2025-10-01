from math import floor
import random

INTERVALO = 100

def gera_aleatorio(v, n):
    for i in range(n):
        v.append(random.randint(INTERVALO*(-1), INTERVALO))

def salva_vetores(nomeArquivo, vets):
    file = open(nomeArquivo, "w")
    for i in vets:
        file.write(f'{i}')
        file.write('\n')
    file.close()

def carrega_vetores(nomeArquivo, vets):
    file = open(nomeArquivo, "r")
    for v in vets:
        for linha in file:
            v = linha
    file.close()
