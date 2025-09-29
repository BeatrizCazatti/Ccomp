# 01: A prefeitura de uma cidade resolveu fazer uma pesquisa entre os seus trabalhadores. Para isso ela coletou alguns dados como idade, sexo (M ou F) e salário. Crie um programa que leia estes dados e que escreva ao final:
    #a) a média salarial dos homens, a média salarial das mulheres;
    #b) o maior salário encontrado entre as pessoas abaixo de 30 anos.
    #Obs.: O final da leitura de dados é marcado por uma idade negativa.
somaHomens = 0
somaMulheres = 0
numHomens = 0
numMulheres = 0
maiorSalario = 0

while True:
    sexo = str(input('Sexo: '))
    idade = int(input('Idade: '))
    if idade < 0:
        break  
    salario = int(input('Salário: '))
    print(20*'=')
    if sexo.upper() == 'F':
        somaMulheres += salario
        numMulheres += 1
    if sexo.upper() == 'M':
        somaHomens += salario
        numHomens += 1
    if idade < 30:
        if salario > maiorSalario:
            maiorSalario = salario
        
print(f'Média de salário entre as mulheres é {somaMulheres/numMulheres}')
print(f'Média de salário entre os homens é {somaHomens/numHomens}')
print(f'O maio salário foi {maiorSalario}')