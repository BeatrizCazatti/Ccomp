#23: Crie um programa se imprima os N primeiros números que sejam primos e façam parte da série de Fibonacci.

n = int(input('N: '))
#1 1 2 3 5
print(1)
def primo(num):
    for i in range(2, c):
        if c%i == 0:
            return False
        elif i == c-1:
            return True

def fibonacci(num):
    n1 = 1
    n2 = 2
    for i in range(1, c+1):
        if c == n1 or c == n2:
            return True
        n3 = n1 + n2
        n1 = n2
        n2 = n3        

for c in range(3, n+1):
    #todos os números de 1 a N
    #é primo?
    if primo(c+1) == True and fibonacci == True:
        print(c)
