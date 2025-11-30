'''Dados os tipos de moedas d um país, determinaro número mínimo de moedas para dar um troco de valor n'''

def trocoMinimo(V, n):
    tot = 0
    for i in range(len(V)-1, -1, -1):
        x = n // V[i]
        tot += x
        n = n - x * V[i]
    print(tot)


V = [1, 5, 10, 25, 50, 100]
n = 37
trocoMinimo(V, n)