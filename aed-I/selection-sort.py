#numero de interaçoes
t = int(input())

for interacaot in range(t):
  #quantidades de numeros no vetor
  n = int(input())
  #organiza os numeros em um array
  vetor = list(map(int, input().split(' ')))
  
  #primeiro ponteiro
  for i in range(len(vetor)-1):
    indiceMenor = i
    #segundo ponteiro
    for j in range(i+1, len(vetor)):
      if (vetor[j] < vetor[indiceMenor]):
        indiceMenor = j
    vetor[i],vetor[indiceMenor] = vetor[indiceMenor], vetor[i]
      

  print(' '.join(list(map(str, vetor))))
