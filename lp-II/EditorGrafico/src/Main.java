import java.util.Scanner;
import modelo.Circulo;
import modelo.Retangulo;
import modelo.Triangulo;

public class Main {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        
        System.out.println("O que voce quer desenhar?");
        System.out.println("1 - Retangulo");
        System.out.println("2 - Circulo");
        System.out.println("3 - Triangulo");
        int fig = teclado.nextInt();
        
        System.out.println("Quantos?");
        int n = teclado.nextInt();

        switch (fig) {
            case 1:
                Retangulo[] retangulos = new Retangulo[n];
                
                for (int i = 0; i < n; i++){
                    int x = teclado.nextInt();
                    int y = teclado.nextInt();
                    int largura = teclado.nextInt();
                    int altura = teclado.nextInt();
                    retangulos[i] = new Retangulo(x, y, altura, largura);
                    System.out.println(retangulos[i]);
                    retangulos[i].desenhar();
                }
                break;

            case 2:
                Circulo[] circulos = new Circulo[n];
                
                for(int j = 0; j < n; j++){
                    int r = teclado.nextInt();
                    circulos[j] = new Circulo(r);
                    System.out.println(circulos[j]);
                    circulos[j].desenhar();
                }
                break;

            case 3:
                Triangulo[] triangulos = new Triangulo[n];
                
                for(int j = 0; j < n; j++){
                    int a = teclado.nextInt();
                    int b = teclado.nextInt();
                    int c = teclado.nextInt();
                    triangulos[j] = new Triangulo(a, b, c);
                    System.out.println(triangulos[j]);
                    triangulos[j].desenhar();
                }
                
                break;
            default:
                System.out.println("Digite uma opcao valida");
        }

        
        teclado.close();
    }
}
