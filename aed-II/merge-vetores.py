import random

A = [4, 9, 4, 6, 8, 2]

def merge(A, p, q, r):
  L = A[p:q]
  R = A[q:r+1]
  
  i = j = 0 #variaveis de controle
  k = p
  
  while i < len(L) and j < len(R):
    if(L[i] <= R[j]):
      A[k] = L[i]
      i += 1
    else:
      A[k] = R[j]
      j += 1
    k +=1
  
  while i < len(L):
    A[k] = L[i]
    i += 1
    k += 1
    
  while j < len(R):
    A[k] = R[j]
    j += 1
    k += 1
    
      
  for c in range(r):
    print(A[c])
  
merge(A, 0, 3, 6)
  
