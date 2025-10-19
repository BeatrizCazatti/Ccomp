import java.util.Scanner;
import modelo.Circulo;
import modelo.PlanoCartesiano;
import modelo.Retangulo;
import modelo.Triangulo;

public class Main {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        PlanoCartesiano plano = new PlanoCartesiano(50, 50);

        boolean continuar = true;

        while(continuar){

            System.out.println("O que voce quer desenhar?");
            System.out.println("1 - Retangulo");
            System.out.println("2 - Circulo");
            System.out.println("3 - Triangulo");
            System.out.println("0 - parar");
    
            int fig = teclado.nextInt();
    
            if (fig == 1) {
                System.out.printf("x = ");
                int x = teclado.nextInt();
                System.out.printf("y = ");
                int y = teclado.nextInt();
                System.out.printf("largura = ");
                int largura = teclado.nextInt();
                System.out.printf("altura = ");
                int altura = teclado.nextInt();
    
                Retangulo r = new Retangulo(x, y, altura, largura);
                plano.addRetangulo(r);
            }
            else if (fig == 2){
                System.out.printf("r = ");
                int r = teclado.nextInt();
                System.out.printf("x = ");
                int x = teclado.nextInt();
                System.out.printf("y =");
                int y = teclado.nextInt();

                Circulo c = new Circulo(r, x, y);
                plano.addCirculo(c);
            }
            else if (fig == 3){
                System.out.printf("a = ");
                int a = teclado.nextInt();
                System.out.printf("b = ");
                int b = teclado.nextInt();
                System.out.printf("c = ");
                int c = teclado.nextInt();
                Triangulo t = new Triangulo(a, b, c);
                plano.addTriangulo(t);
            }
            else if(fig == 0){                
                plano.desenharFormas();
                continuar = false;
                break;
            } 
            else{
                System.out.println("Digite uma opcao valida");
            }
        }
        teclado.close();
    }
}
