import java.util.Scanner;

public class Exercicio11 {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        float a = teclado.nextFloat();
        char op = teclado.next().charAt(0);
        float b = teclado.nextFloat();

        float result = 0;
        switch (op) {
            case '+':
                result = a+b;
                break;
            case '-':
                result = a-b;
                break;
            case '/':
                result = a/b;
                break;
            case '*':
                result = a*b;
                break;
            default:
                System.out.println("Digite um operador valido");
                break;
        }
        System.out.printf("%.3f %c %.3f = %.3f\n", a, op, b, result);
        teclado.close();
    }
}
