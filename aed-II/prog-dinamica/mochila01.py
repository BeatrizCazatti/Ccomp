valores = [4, 5, 10, 11]
pesos = [2, 3, 4, 5]
w = 8
n = len(valores)

dp = [[0 for _ in range(w + 1)]for _ in range(n + 1)]

def mochila01 (w, n):
    for i in range(1, n + 1):
        for j in range(1, w + 1):
            if(pesos[i - 1] >= j):
                dp[i][j] = dp[i - 1][j]
            else:
                dp[i][j] = max(valores[i - 1] + dp[i - 1][j - pesos[i - 1]], dp[i-1][j])
    return dp[n][w]

print(mochila01(w, n))