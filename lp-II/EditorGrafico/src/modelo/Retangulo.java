package modelo;

public class Retangulo {
    private int x;
    private int y;
    private int largura;
    private int altura;

    public Retangulo(int x, int y, int lado) {
        this.x = x;
        this.y = y;
        this.largura = lado;
        this.altura = lado;
    }

    public Retangulo(int x, int y, int altura, int largura){
        this.x = x;
        this.y = y;
        this.altura = altura;
        this.largura = largura;
    }

    public void desenhar(){
        System.out.printf("Retangulo(%d, %d, %d, %d)\n", this.x, this.y, this.largura, this.altura);
        //y:
        for(int c = 0; c < this.y - 1; c++){
            System.out.print("\n");
        }
        //margem x
        for(int i = 0; i <= this.altura + 1; i++){
            for(int c = 0; c < this.x; c++){
                System.out.print(" ");
            }
            if(i == 0 || i == this.altura){
                for(int j = 0; j < this.largura; j++){
                    System.out.print('-');
                }
                System.err.println();
            }else{
                System.out.print('|');
                for(int k = 0; k < this.largura - 2; k++){
                    System.out.print(' ');
                }
                System.out.print("|\n");
            }
        }
    }
}
