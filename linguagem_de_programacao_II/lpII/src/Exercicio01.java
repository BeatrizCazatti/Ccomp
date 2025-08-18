
import java.util.Scanner;

public class Exercicio01 {
    public static void main(String[] args){
        Scanner teclado = new Scanner(System.in);

        /*Questao 1/2*/
        float a = teclado.nextFloat();
        float b = teclado.nextFloat();

        System.out.printf("Soma %f \n", a+b);
        System.out.printf("Subtracao %f \n", a-b);
        System.out.printf("Multiplicacao %f \n", a*b);
        System.out.printf("Divisao %f \n", a/b);


        /*Questao 3*/
        float salario = teclado.nextFloat();
        float per_salario = teclado.nextFloat();

        System.out.printf("O novo salario eh %f \n", salario + salario*(per_salario/100));


        /*Questao 4*/
        final float PI = 3.14f;
        float r = teclado.nextFloat();

        System.err.printf("Perimetro %f \n", 2*PI*r);
        System.err.printf("Area %f \n", PI*r*r);

        teclado.close();
    }
}
