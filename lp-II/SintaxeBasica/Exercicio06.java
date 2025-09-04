
import java.util.Scanner;

/*Leia a distância percorrida por um carro, o tempo gasto e a
quantidade de gasolina consumida. Em seguida, imprima a
velocidade média (KM/h) e o consumo de combustível (Km/l). */

public class Exercicio06 {
    public static void main(String[] args) {
        float d, t, g;
        Scanner teclado = new Scanner(System.in);

        System.out.printf("Distancia(km): ");
        d = teclado.nextFloat();
        System.out.printf("Tempo(h): ");
        t = teclado.nextFloat();
        System.out.printf("Gasolina consumida(l): ");
        g = teclado.nextFloat();
        
        System.out.printf("velocidade média foi de %.2fKm/h \n", d/t);
        System.out.printf("consumo de combustível foi de %.2fKm/L \n", d/g);

        teclado.close();
    }
}
