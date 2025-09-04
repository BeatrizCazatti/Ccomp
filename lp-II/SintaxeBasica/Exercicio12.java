/*Ler dois números inteiros (a e b) e imprimir os pares no intervalo
a..b, além da soma e da média desses números. Caso a seja
maior que b, imprima os números pares no intervalo b..a.  */
import java.util.Scanner;

public class Exercicio12 {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        int a = teclado.nextInt();
        int b = teclado.nextInt();
        int soma = 0, qtd = 0;
        
        if(a > b){
            int temp = a;
            a = b;
            b = temp;
        }
        
        for(a = a % 2 != 0 ? a++ : a; a <= b; a+=2){
            System.out.println(a);
            soma += a;
            qtd++;
        }
        System.out.printf("A soma eh %d \n", soma);
        System.out.printf("A media eh %d \n", soma/qtd);
        teclado.close();
    }
}
