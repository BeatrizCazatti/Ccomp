#Aplica Algopritmo de Gram-Shcmidt
def ortogonalizar_base (base):
    base_ortogonal = []
    #definir u1, u2, ...
    for i in range(len(base)):
        #primeiro vetor
        if i == 0:
            base_ortogonal.append(base[i])
        else:
            print(f"vetor {i} {base[i]}")
            #percorrer v1, v2...
            for j in range(len(base[i])):
                #projeção(u)
                #proj de vi em uj
                projecao(base[i], base_ortogonal[j])
            #produto_escalar(v1, v2)
    return base_ortogonal

def projecao(vn, uj):
    #1:produto escalar
#def produto_escalar(v1, v2):

#Projeção
    #produto entre dois vetores(vn sobre u1) -> (vn sobre u2)...
        #divide pela norma de u1
        #multiplica por u1
    #subtrai pelo 
        #produto entre vn e u2
            #divide pela norma de u2
            #multiplica por u2

#2:módulo

#produto escalar

#subtração

#Input do usuário
num_vetores = int(input('Digite o número de vetores da base: '))
base = []

print("Digite as componentes dos vetores separando-as por vírgulas")
for n in range(1, num_vetores+1):
    componentes = input(f"Vetor {n}: ")
    base.append(componentes.split(","))

ortogonalizar_base(base)
print('Base Ortogonal:')
print(base)
#ortogonalizar_base(base)