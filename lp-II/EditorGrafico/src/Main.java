import java.util.Scanner;
import modelo.Retangulo;
import modelo.Circulo;

public class Main {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        
        // int n = teclado.nextInt();
        // Retangulo[] retangulos = new Retangulo[n];
        
        // for (int i = 0; i < n; i++){
        //     int novoX = teclado.nextInt();
        //     int y = teclado.nextInt();
        //     int largura = teclado.nextInt();
        //     int altura = teclado.nextInt();
        //     retangulos[i] = new Retangulo(novoX, y, altura, largura);
        //     System.out.println(retangulos[i]);
        //     retangulos[i].desenhar();
        // }

        int m = teclado.nextInt();
        Circulo[] circulos = new Circulo[m];
        
        for(int i = 0; i < m; m++){
            int r = teclado.nextInt();
            circulos[i] = new Circulo(r);
            System.out.println(circulos[i]);
            circulos[i].desenhar();
        }
        teclado.close();
    }
}
