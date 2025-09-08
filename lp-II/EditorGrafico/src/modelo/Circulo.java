package modelo;
//import Math;

public class Circulo {
    private int r;

    public Circulo(int r){
        this.r = r;
    }


    public void desenhar(){
        int espaco = r-1;
        int preenche = r-1;
        for(int i = 0; i < r; i++){
            for(int c = 0; c < espaco; c++){
                System.out.printf(".");
            }
            if(preenche <= 2*r){
                preenche += 2;
            }
            for(int j = 0; j < preenche; j++){
                System.out.printf("*");
            }
            System.out.println();
            espaco--;
        }

        for(int l = 1; l < r; l++){
            for(int j = 0; j < preenche; j++){
                System.out.printf("*");
            }
            System.out.println();
        }
        espaco = 0;
        for(int m = 0; m < r-1; m++){
            espaco++;
            preenche -= 2;
    
            for(int c = 0; c < espaco; c++){
                System.out.printf(".");
            }
            for(int j = 0; j < preenche; j++){
                System.out.printf("*");
            }
            System.out.println();
        }
    }
}