/*Leia uma variável n inteira. Em seguida, imprima uma mensagem
informando se o número n é par ou ímpar.*/
import java.util.Scanner;

public class Exercicio07 {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        int n = teclado.nextInt();
        System.out.println((n % 2) == 0 ? "par" : "impar");
        teclado.close();
    }
}
