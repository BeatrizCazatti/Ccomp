
import java.util.Scanner;

/*Leia duas variáveis uma para armazenar a quantidade de kWh
consumidos em uma casa e outra para o preço do kWh. Em
seguida, calcule o valor a ser pago, concedendo um desconto de
10% caso o consumo seja menor que 150kWh. */

public class Exercicio08 {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        float q = teclado.nextFloat();
        float p = teclado.nextFloat();

        if(q < 150){
            System.out.printf("O valor a ser pago eh %.2f", (q*p)*0.9);
        } else {
            System.out.printf("O valor a ser pago eh %.2f", q*p);
        }
    }
}
