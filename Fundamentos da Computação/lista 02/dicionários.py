tabela_imc = {"m":{10: [14.42, 19.60],
                    11: [14.83, 20.35]},
            "f": {10: [14.23, 20.19],
                11: [14.60, 21.18]}}

altura = float(input('Altura: '))
peso = float(input('Peso: '))
idade = int(input('Idade: '))
sexo = input('Sexo: ')

imc = round(peso / (altura*altura), 2)

print(imc)

if imc < tabela_imc[sexo][idade][0]:
    print('ABAIXO DO PESO')
elif imc > tabela_imc[sexo][idade][1]:
    print('SOBREPESO')
else:
    print('PESO ADEQUADO')
