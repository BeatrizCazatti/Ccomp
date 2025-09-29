#numero de interaçoes
t = int(input())

for interacaot in range(t):
  #quantidades de numeros no vetor
  n = int(input())
  #organiza os numeros em um array
  vetor = list(map(int, input().split(' ')))
  
  for i in range(1, len(vetor)):
    while vetor[i-1] > vetor[i]:
      print("1:",vetor)
      vetor[i], vetor[i-1] = vetor[i-1],vetor[i]
      print("2:",vetor)

  print(' '.join(list(map(str, vetor))))