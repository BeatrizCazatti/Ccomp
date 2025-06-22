#10: Crie um programa que calcule a soma dos primeiros 20 números pares. Os primeiros números pares são: 2, 4, 6, ...
soma = 0
for i in range(2, 42, 2):
    print(i)
    soma += i

print(soma)