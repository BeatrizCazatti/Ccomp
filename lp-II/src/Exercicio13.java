/* Ler um número de alunos n. Em seguida, ler as notas dos n
alunos e imprimir, ao final, a média da turma.*/

import java.util.Scanner;

public class Exercicio13 {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        int n = teclado.nextInt();
        float notas = 0;

        for(int i = 0; i < n; i++){
            System.out.printf("Nota do aluno %d: ", i+1);
            notas += teclado.nextFloat();
        }

        System.out.printf("A média da turma foi %.3f", notas/n);

        teclado.close();
    }
}
