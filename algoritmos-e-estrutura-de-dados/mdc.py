def mdc(a, b):
    while b:
        a, b = b, a % b
    return a

a = int(input("a: "))
b = int(input("b: "))

print(f"O MDC de {a} e {b} é {mdc(a, b)}")