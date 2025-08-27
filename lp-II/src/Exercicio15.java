/*Ler caracteres até que o usuário digite '.' (ponto). Ao final
imprimir: a quantidade de vogais, a quantidade de dígitos e a
quantidade dos demais caracteres. */

import java.util.Scanner;

public class Exercicio15 {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        char res = teclado.nextLine().charAt(0);
        int numVogal = 0, numDigito = 0, numOutros = 0;
        while(res != '.'){
            switch (res) {
                case 'a': case 'e': case 'i': case 'o': case 'u':
                    numVogal++;
                    break;
                    case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
                    numDigito++;
                    break;
                default:
                    numOutros++;
            }
            res = teclado.nextLine().charAt(0);
        }
        System.out.printf("O número de vogais é %d, de dígitos é %d e demais %d  \n", numVogal, numDigito, numOutros);
        teclado.close();
    }
}
