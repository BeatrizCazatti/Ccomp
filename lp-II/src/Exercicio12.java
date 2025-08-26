import java.util.Scanner;

public class Exercicio12 {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        int a = teclado.nextInt();
        int b = teclado.nextInt();

        if(a > b){
            int temp = a;
            a = b;
            b = temp;
            if(a % 2 != 0){
                a++;
            }
        }

        for(; a <= b; a+=2){
            System.out.println(a);
        }


        teclado.close();
    }
}
