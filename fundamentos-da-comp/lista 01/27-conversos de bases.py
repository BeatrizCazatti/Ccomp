#27: Crie um programa que leia um número (com qualquer número de dígitos) em uma base numérica de ordem 10 e calcule o número correspondente na base decimal. O número da ordem da base (e.g., 2 para binária, 3 para ternária, 8 para octal, etc.) deve também ser informado pelo usuário.

convertido = []
num = int(input('Digite o número: '))
print('2 - binário')
print('3 - ternário')
print('8 - octal')
base = int(input('Converter para? '))
match base:
    case 2:
        quociente = 2
        divisor = num
        resto = num

        while divisor != 1:
            dividendo = divisor//2 #resultado inteiro da divisão
            resto = divisor % 2 #resto da divisão
            convertido.append(resto)
            print(convertido)
            
            divisor = dividendo
        
        convertido.append(quociente)
        convertido.sort(reverse=True)
        print(f'O número {num} na base binária é {convertido}')

