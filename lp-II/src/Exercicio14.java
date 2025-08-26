/* Ler notas de alunos até que o usuário digite -1. Ao final imprimir
a quantidade de alunos, a média da turma, a maior nota e a
menor nota.*/

import java.util.Scanner;

public class Exercicio14 {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        int qtd = 0;
        float nota, max = 0, min = 0, soma = 0;

        do{
            System.out.printf("Digite a nota do aluno %d: ", qtd + 1);
            nota = teclado.nextInt();
            if(nota != -1){
                max = nota > max ? nota : max;
                min = nota < min || qtd == 0 ? nota : min;
                soma += nota;
                qtd++;
            }
        }while(nota != -1);
        System.out.printf("A quantidade de alunos é %d \n", qtd);
        System.out.printf("A média da turma é %.2f \n", soma/qtd);
        System.out.printf("A maior nota foi %.2f e a menor foi %.2f \n", max, min);
        teclado.close();
    }
}
