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
int carrega_funcionarios(DadosFuncionario *func, FILE* fp);
//int carrega_mes
//int imprime_folha_de_pagamento

int main () {
    DadosFuncionario funcionarios[10]; //cria um array de structs

    //abre
    FILE* fp = fopen("Funcionarios.txt", "r");
    if (fp == NULL) {
        perror("Erro ao abrir o arquivo Funcionarios.txt");
        return 0;
    }

    for(int i = 0; i <= 10; i++){
        carrega_funcionarios(&funcionarios[i], fp);
        printf(".%s.\n", funcionarios[i].nome);
        printf(".%s.\n", funcionarios[i].matricula);
        printf(".%s.\n", funcionarios[i].endereco);
        printf(".%s.\n", funcionarios[i].cpf);
        printf(".%s.\n", funcionarios[i].cod_banco);
        printf(".%s.\n", funcionarios[i].agencia);
        printf(".%s.\n", funcionarios[i].conta);
        printf(".%f.\n", funcionarios[i].valor_hora);
    }

    fclose(fp);
    return 0;
}

int carrega_funcionarios (DadosFuncionario *func, FILE* fp){
    char linha[300]; //buffer
    fgets(linha, sizeof(linha), fp);

    // sscanf(linha,
    // "%50c%12c%65c",
    // (*func).nome,
    // (*func).matricula,
    // (*func).endereco
    // );
    // // (*func).cpf,
    // // (*func).cod_banco,
    // // (*func).agencia,
    // // (*func).conta,
    // // &(*func).valor_hora
    // (*func).nome[TAM_NOME] = '\0';
    // (*func).matricula[TAM_MATRICULA] = '\0';
    // (*func).endereco[TAM_ENDERECO] = '\0';
    // (*func).cpf[TAM_CPF] = '\0';
    // (*func).cod_banco[TAM_COD_BANCO] = '\0';
    // (*func).agencia[TAM_AGENCIA] = '\0';
    // (*func).conta[TAM_CONTA] = '\0';
    // Calcula os offsets para cada campo na linha
    int offset = 0;

    // Nome (TAM_NOME caracteres)
    strncpy(func->nome, linha + offset, TAM_NOME);
    func->nome[TAM_NOME] = '\0'; // Nulo-termina a string
    offset += TAM_NOME; // Avança o offset

    // Matrícula (TAM_MATRICULA caracteres)
    strncpy(func->matricula, linha + offset, TAM_MATRICULA);
    func->matricula[TAM_MATRICULA] = '\0';
    offset += TAM_MATRICULA;

    // Endereço (TAM_ENDERECO caracteres)
    strncpy(func->endereco, linha + offset, TAM_ENDERECO);
    func->endereco[TAM_ENDERECO] = '\0';
    offset += TAM_ENDERECO;

    // CPF (TAM_CPF caracteres)
    strncpy(func->cpf, linha + offset, TAM_CPF);
    func->cpf[TAM_CPF] = '\0';
    offset += TAM_CPF;

    // Código do Banco (TAM_COD_BANCO caracteres)
    strncpy(func->cod_banco, linha + offset, TAM_COD_BANCO);
    func->cod_banco[TAM_COD_BANCO] = '\0';
    offset += TAM_COD_BANCO;

    // Agência (TAM_AGENCIA caracteres)
    strncpy(func->agencia, linha + offset, TAM_AGENCIA);
    func->agencia[TAM_AGENCIA] = '\0';
    offset += TAM_AGENCIA;

    // Conta (TAM_CONTA caracteres)
    strncpy(func->conta, linha + offset, TAM_CONTA);
    func->conta[TAM_CONTA] = '\0';
    offset += TAM_CONTA;

    // Valor da Hora (TAM_VALOR_HORA caracteres)
    // Copia para um buffer temporário para conversão
    //strncpy(temp_valor_hora, linha + offset, TAM_VALOR_HORA);
    //temp_valor_hora[TAM_VALOR_HORA] = '\0'; // Nulo-termina para atof
    //func->valor_hora = atof(temp_valor_hora); // Converte string para float


    return 0;
}
