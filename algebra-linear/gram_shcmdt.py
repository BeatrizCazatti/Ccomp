#Funções úteis:
def produto_escalar(v1, v2):
    resultado = 0
    for i in range(len(v1)):
        resultado += float(v1[i]) * float(v2[i])
    return resultado

def subtracao_vetores(v1, v2):
    vetor_resultado = v1[:]
    for i in range(len(v1)):
        vetor_resultado[i] = float(v1[i]) - float(v2[i])
    return vetor_resultado

def produto_vetor_por_escalar(v1, escalar):
    vetor_resultado = v1[:]
    for i in range(len(v1)):
        vetor_resultado[i] = v1[i] * escalar
    return vetor_resultado

def projecao_vetores(v1, v2):
    escalar = produto_escalar(v1, v2) / produto_escalar(v2, v2)
    return produto_vetor_por_escalar(v2, escalar)

#Input do usuário:
num_vetores = int(input('Digite o número de vetores da base: '))
base = []

print("Digite as componentes dos vetores separando-as por vírgulas")
for n in range(1, num_vetores+1):
    entrada = input(f"Vetor {n}: ")
    componentes_str = entrada.split(",")
    componentes = []
    for s in componentes_str:
        componentes.append(float(s))
    base.append(componentes)

#Aplicação do algopritmo de Gram-Shcmidt:
def ortogonalizar_base (base):
    base_ortogonal = []
    for i in range(len(base)):
        vetor_ortogonal = base[i][:]
        for j in range(len(base_ortogonal)):
            proj = projecao_vetores(base[i], base_ortogonal[j])
            vetor_ortogonal = subtracao_vetores(vetor_ortogonal, proj)

        base_ortogonal.append(vetor_ortogonal)
    return base_ortogonal

#Output(formatado com aproximação de duas casas):
print("\nBase ortogonal:")
for i, vetor in enumerate(ortogonalizar_base(base), 1):
    print(f"u{i} = [", end="")
    print(", ".join(f"{x:.2f}" for x in vetor), end="]\n")