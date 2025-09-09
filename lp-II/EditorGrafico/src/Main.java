import java.util.Scanner;
import modelo.Circulo;
import modelo.Retangulo;

public class Main {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        
        System.out.println("O que voce quer desenhar?");
        System.out.println("1 - Retangulo");
        System.out.println("2 - Circulo");
        int fig = teclado.nextInt();
        
        switch (fig) {
            case 1:
                System.out.println("Quantos?");
                int n = teclado.nextInt();
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
                System.out.println("Quantos?");
                int m = teclado.nextInt();
                Circulo[] circulos = new Circulo[m];
                
                for(int j = 0; j < m; j++){
                    int r = teclado.nextInt();
                    circulos[j] = new Circulo(r);
                    System.out.println(circulos[j]);
                    circulos[j].desenhar();
                }
                break;
            default:
                System.out.println("Digite uma opcao valida");
        }

        teclado.close();
    }
}
