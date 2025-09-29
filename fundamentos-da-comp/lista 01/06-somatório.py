#06:Crie um programa que leia 2 números inteiros positivos, A e B, e que calcule a soma de todos os números compreendidos entre eles. Os valores A e B não devem ser considerados no somatório. Caso A seja maior do que B deve ser enviada uma mensagem para o usuário informando que a soma não será realizada.

soma = 0
numA = int(input("Digite o valor de A: "))
numB = int(input("Digite o valor de b: "))
if numA > numB:
    print('Não é possível realizar a soma, A é maior que B.')
else:
    for i in range(numA+1, numB):
        soma += i
    print(soma)

