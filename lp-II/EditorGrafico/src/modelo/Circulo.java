package modelo;
//import Math;

public class Circulo {
    private int r;
    private int x;
    private int y;

    public Circulo(int r, int x, int y){
        this.r = r;
        this.x = x;
        this.y = y;
    }

    public void desenhar(){
        for(int c = 0; c < this.y - 1; c++){
            System.out.print("\n");
        }
        for (int i = 0; i <= r*2; i++) {
            for(int c = 0; c < this.x; c++){
                System.out.print(" ");
            }
            for (int j = 0; j <= r*2; j++) {
                //distância p o centro
                int dx = i - r;
                int dy = j - r;
                //f(x,y) = x2 + y2 − r2
                double dist = dx * dx + dy * dy - r*r;
                //f(x,y) < 0 -> dentro
                //f(x,y) >= 0 -> fora
                //tolerância para borda
                if (dist < 0.5+r && dist > -0.5-r) {
                    System.out.print("* ");
                } else {
                    System.out.print("  ");
                }
            }
            System.out.println();
        }
    }

    // public void desenhar(){
    //     int espaco = r-1;
    //     int preenche = r-1;
    //     for(int i = 0; i < r; i++){
    //         for(int c = 0; c < espaco; c++){
    //             System.out.printf(".");
    //         }
    //         if(preenche <= 2*r){
    //             preenche += 2;
    //         }
    //         for(int j = 0; j < preenche; j++){
    //             System.out.printf("*");
    //         }
    //         System.out.println();
    //         espaco--;
    //     }

    //     for(int l = 1; l < r; l++){
    //         for(int j = 0; j < preenche; j++){
    //             System.out.printf("*");
    //         }
    //         System.out.println();
    //     }
    //     espaco = 0;
    //     for(int m = 0; m < r-1; m++){
    //         espaco++;
    //         preenche -= 2;
    
    //         for(int c = 0; c < espaco; c++){
    //             System.out.printf(".");
    //         }
    //         for(int j = 0; j < preenche; j++){
    //             System.out.printf("*");
    //         }
    //         System.out.println();
    //     }
    // }

    public int getR() {
        return r;
    }

    public void setR(int novoR) {
        if(r > 0) { r = novoR; }
    }
}