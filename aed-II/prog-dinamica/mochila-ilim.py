valores = [4, 5, 10, 11]
pesos = [2, 3, 4, 5]
w = 8
n = len(valores)

dp = [0 for _ in range(w + 1)]

def mochila_ilim(w, n):
    for j in range(1, w + 1):
        for i in range(n):
            if(pesos[i] <= j):
                dp[j] = max(dp[j], valores[i] + dp[j - pesos[i]])
    return dp[w]

print(mochila_ilim(w, n))