
import java.util.Scanner;

/*Leia uma variável t com um tempo qualquer em segundos e imprima esse valor em hora, minuto e segundo. */
public class Exercicio05 {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        int t = teclado.nextInt();

        int h, m, s;
        h = t / 360;
        m = (t % 360) / 60;
        s = t - 360*h - m*60;
        System.out.printf("%d:%d:%d\n", h, m, s);
        teclado.close();
    }
}
