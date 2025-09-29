/*Implemente um programa na linguagem C que processe a folha de pagamento de uma firma com dez funcionários. Os funcionários trabalham por demanda. A cada mês o salário precisa ser recalculado em função das horas efetivamente trabalhadas.

Há um arquivo texto <Funcionarios.txt> sobre os funcionários contendo os campos nome, matricula, endereço, CPF, cod_banco, agência, conta, valor_hora. Todos os campos do arquivo de funcionários exceto valor_hora são alfanuméricos, enquanto que valor_hora é um número real positivo. Os campos são separados por um caracter de espaço. O número de caracteres por campo alfanumérico é respectivamente 50, 12, 65, 11, 3, 5, 8.
Todo mês, a gerência produz um arquivo com a matrícula e o número de horas trabalhadas, por exemplo no mês corrente foi gerado <Novembro.txt>. O formato de cada linha destes arquivo é o seguinte: matricula com 12 caracteres + um caracter barra (virada para a direita) + um campo numérico inteiro positivo. 
A folha de pagamento gera um arquivo texto na tela com os seguintes campos o Nome, o CPF, cod_banco, agência, conta e o valor a ser pago para cada um dos funcionários. Cada linha da sáida diz respeito a um funcionario, os campos são separados pelo caracter '|'. A folha de pagamento deve ser impressa em ordem alfabética pelo nome de funcionário

Atenção para as seguinte restrição:
Os dados dos arquivos ao serem carregados em memória devem ser armazenados em arrays de struct.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAM_NOME 50
#define TAM_MATRICULA 12
#define TAM_ENDERECO 65
#define TAM_CPF 11
#define TAM_COD_BANCO 3
#define TAM_AGENCIA 5
#define TAM_CONTA 8

typedef struct{
    char nome[TAM_NOME + 1];
    char matricula[TAM_MATRICULA + 1];
    char endereco[TAM_ENDERECO + 1];
    char cpf[TAM_CPF + 1];
    char cod_banco[TAM_COD_BANCO + 1];
    char agencia[TAM_AGENCIA + 1];
    char conta[TAM_CONTA + 1];
    float valor_hora;
}DadosFuncionario;

typedef struct {
    char matricula[TAM_MATRICULA + 1];
	int horas;
} Mes;

void carregar_funcionarios(DadosFuncionario funcionarios[], FILE * fp, int numfunc);
void carregar_mes(Mes mes[], FILE * fp, int numfunc);
void bubble_sort(DadosFuncionario ref[], int numfunc);
void imprimir_folha(DadosFuncionario funcionarios[], Mes mes[], int numfunc);


void carregar_funcionarios(DadosFuncionario funcionarios[], FILE * fp, int numfunc) {
	int i;
	for (i = 0; i < numfunc; i++) {
		fgets(funcionarios[i].nome, TAM_NOME+1, fp);
		fgetc(fp);
		fgets(funcionarios[i].matricula, TAM_MATRICULA+1, fp);
		fgetc(fp);
		fgets(funcionarios[i].endereco, TAM_ENDERECO+1, fp);
		fgetc(fp);
		fgets(funcionarios[i].cpf, TAM_CPF+1, fp);
		fgetc(fp);
		fgets(funcionarios[i].cod_banco, TAM_COD_BANCO+1, fp);
		fgetc(fp);
		fgets(funcionarios[i].agencia, TAM_AGENCIA+1, fp);
		fgetc(fp);
		fgets(funcionarios[i].conta, TAM_CONTA+1, fp);
		fgetc(fp);
		fscanf(fp, "%f", &funcionarios[i].valor_hora);
		fgetc(fp);
	}
	fclose(fp);
} 

void carregar_mes(Mes mes[], FILE * fp, int numfunc) {
	int i;
	for (i = 0; i < numfunc; i++) {
		fgets(mes[i].matricula, TAM_MATRICULA+1, fp);
		fgetc(fp);
		fscanf(fp, "%d", &mes[i].horas);
		fgetc(fp);
	}
	fclose(fp);
}

void bubble_sort(DadosFuncionario ref[], int numfunc) {
	int i, j, pos;
	for (i = 0; i < numfunc; i++) {
		for (j = 0; j < numfunc-i-1; j++ ) {
			for (pos = 0; pos < 51; pos++) {
				if (ref[j].nome[pos] > ref[j+1].nome[pos]) {
					DadosFuncionario aux = ref[j];
					ref[j] = ref[j+1];
					ref[j+1] = aux;
					break;
				} else if (ref[j].nome[pos] < ref[j+1].nome[pos]) {
					break;
				}
			}
		}
	}
}

void imprimir_folha(DadosFuncionario funcionarios[], Mes mes[], int numfunc) {
	int i, j;
	for (i = 0; i < numfunc; i++) {
		for (j = 0; j < numfunc; j++) {
			if (strcmp(funcionarios[i].matricula, mes[j].matricula) == 0) {
				printf("%s|%s|%s|%s|%s|%.2f\n", funcionarios[i].nome, funcionarios[i].cpf, funcionarios[i].cod_banco, funcionarios[i].agencia, funcionarios[i].conta, funcionarios[i].valor_hora*mes[j].horas);
			}
		}
	}
}

int main() {
	FILE * arquivo1 = fopen("Funcionarios.txt", "r"), * arquivo2 = fopen("Novembro.txt", "r");
	if (arquivo1 == NULL || arquivo2 == NULL)
		return 1;
		
	DadosFuncionario funcionarios[10];
	Mes mes[10];
	
	carregar_funcionarios(funcionarios, arquivo1, 10);
	carregar_mes(mes, arquivo2, 10);
	bubble_sort(funcionarios, 10);
	imprimir_folha(funcionarios, mes, 10);
	return 0;
}

