/*Implemente um programa na linguagem C que processe a folha de pagamento de uma firma com dez funcionários. Os funcionários trabalham por demanda. A cada mês o salário precisa ser recalculado em função das horas efetivamente trabalhadas.

Há um arquivo texto <Funcionarios.txt> sobre os funcionários contendo os campos nome, matricula, endereço, CPF, cod_banco, agência, conta, valor_hora. Todos os campos do arquivo de funcionários exceto valor_hora são alfanuméricos, enquanto que valor_hora é um número real positivo. Os campos são separados por um caracter de espaço. O número de caracteres por campo alfanumérico é respectivamente 50, 12, 65, 11, 3, 5, 8.
Todo mês, a gerência produz um arquivo com a matrícula e o número de horas trabalhadas, por exemplo no mês corrente foi gerado <Novembro.txt>. O formato de cada linha destes arquivo é o seguinte: matricula com 12 caracteres + um caracter barra (virada para a direita) + um campo numérico inteiro positivo. 
A folha de pagamento gera um arquivo texto na tela com os seguintes campos o Nome, o CPF, cod_banco, agência, conta e o valor a ser pago para cada um dos funcionários. Cada linha da sáida diz respeito a um funcionario, os campos são separados pelo caracter '|'. A folha de pagamento deve ser impressa em ordem alfabética pelo nome de funcionário

Atenção para as seguinte restrição:
Os dados dos arquivos ao serem carregados em memória devem ser armazenados em arrays de struct.*/

#include <stdio.h>
#include <string.h>

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
}Funcionario;
int carrega_funcionarios(Funcionario funcionarios, FILE* fp);
//int carrega_mes
//int imprime_folha_de_pagamento

int main () {
    Funcionario funcionarios[10];

    //abre
    FILE* fp = fopen("Funcionarios.txt", "r");
    if (fp == NULL) {
        perror("Erro ao abrir o arquivo Funcionarios.txt");
        return 0;
    }

    carrega_funcionarios(funcionarios, fp);

    fclose(fp);
    return 0;
}

int carrega_funcionarios (Funcionario funcionarios, FILE* fp){
    fscanf(fp, "%50s", funcionarios[0].nome);
    //strcpy(linha, TAM_NOME, &funcionario.nome);
    printf("%s\n", funcionarios[0].nome); 
    //printf("%s\n", linha); 
    return 0;
}