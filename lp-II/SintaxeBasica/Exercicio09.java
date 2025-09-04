/* */

import java.util.Scanner;

public class Exercicio09 {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        float x = teclado.nextFloat();
        float d = x % (int)x;
        System.out.println(x);
        System.out.println(d);
        System.out.println((d > 0.5) ? (int)++x : (int)x);

        teclado.close();
    }
}
