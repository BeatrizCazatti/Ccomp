package modelo;
//import Math;

public class Circulo {
    private int r;

    public Circulo(int r){
        this.r = r;
    }

    public void desenhar(){
        for (int y = 0; y <= r*2; y++) {
            for (int x = 0; x <= r*2; x++) {
                //distância p o centro
                int dx = x - r;
                int dy = y - r;
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