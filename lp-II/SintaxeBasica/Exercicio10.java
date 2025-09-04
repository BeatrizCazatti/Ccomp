import java.util.Scanner;

public class Exercicio10 {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        int n = teclado.nextInt();
        float a = teclado.nextFloat();
        float b = teclado.nextFloat();

        if(n <= a){
            System.out.println("n está antes");
        }else if(n <= b){
            System.out.println("n está dentro do intervalo");
        }else {
            System.out.println("n está depois");
        }
        teclado.close();
    }
}
