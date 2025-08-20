/*Faça um programa que leia uma data em formato texto ou numérico e a imprima na tela em formato numérico.

As datas devem ser escritas em formato numérico tal qual utilizado na língua portuguesa, DD/MM/AAAA (dois caracteres para o dia, dois caracteres para o mês e quatro caracteres para o ano). Os números de dia e mês inferiores a 10 devem ser acrescidos de um algarismo zero a esquerda.

Exemplo: 

Entrada:
1 de fevereiro de 2023
Saída:
01/02/2023

Entrada:
1/12/2023
Saída:
01/12/2023*/

#include <stdio.h>
#include <string.h>

void data_texto_para_num (int day, char monthname[], int year) {
    const char *meses[] = {"jan", "fev", "mar", "abr", "mai", "jun", "jul", "ago", "set", "out", "nov", "dez"};
    
    for(int i = 0; i < 12; i++) {
        if(strncmp(monthname, meses[i], 3) == 0){
            printf("%02d/%02d/%d", day, i+1, year);
            break;
        }
    }
}

int main(void){

    int month, day, year; 
    char monthname[16], line[256];
    char word1[16], word2[16], word3[16];

    while (fgets(line, sizeof(line), stdin) > 0) { 
        if (sscanf(line, "%d %s %d", &day, monthname, &year)== 3){ /* 25 Dec 1988 form */
            printf("monthname:%s\n", monthname);
            data_texto_para_num(day, monthname, year); 
        } else if (sscanf(line, "%d/%d/%d", &month, &day, &year) == 3) {
            printf("%02d/%02d/%d", month, day, year); /* mm/dd/yy form */ 
        } else if (sscanf(line, "%d %s %s %s %d", &day, word1, word2, word3, &year) == 4) { /*11 de novembro 2005*/
            if(strcmp(word1, "de")){
                 printf("é um de");
                 strcpy(monthname, word2);
                 printf("%02d/%02d/%d", day, month, year);
                }
            } else if (sscanf(line, "%d %s %s %s %d", &day, word1, word2, word3, &year) == 5) { /*11 de novembro de 2005*/
                if(strcmp(word1, "de") == 0){
                    data_texto_para_num(day, word2, year);
                } 
        } else printf("invalid: %s", line); /* invalid form */ 
    } 
    return 0;
}