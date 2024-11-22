#01: Faça um programa para ler 50 valores de temperaturas em graus Celsius. Transformar essas temperaturas em fahrenheit e imprimir a média das temperaturas em Celsius e fahrenheit e quantas temperaturas ficaram acima da média em fahrenheit.

celsius = []
fahrenheit = []
somaCelsius = 0
somaFahrenheit = 0

for temp in range(1, 5+1):
    temperatura = int(input('Temperatura em Celsius: '))
    celsius.append(temperatura)
    fahrenheit.append((temperatura*1.8)+32)

celsius.sort()
fahrenheit.sort()
print(celsius)
print(fahrenheit)

for c in celsius:
    somaCelsius += c

for f in fahrenheit:
    somaFahrenheit += f

print(f'A média em Celsius é {somaCelsius/len(celsius)}')
print(f'A média em Fahrenheit é {somaFahrenheit/len(fahrenheit)}')

#acima da média
for t in celsius:
    if t > somaCelsius/len(celsius):
        print(f'{t} tá acima da média')

for t in fahrenheit:
    if t > somaFahrenheit/len(fahrenheit):
        print(f'{t} tá acima da média')