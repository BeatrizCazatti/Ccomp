package modelo;

public class Retangulo {
    private int x;
    private int y;
    private int largura;
    private int altura;

    //quadrado: apenas 3 parametros
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

    public int getX(){
        return x;
    }
    public int getY() {
        return y;
    }

    public void setX(int x) {
        this.x = x;
    }

    public void setY(int y) {
        this.y = y;
    }

    public int getLargura() {
        return largura;
    }
    
    public int getAltura() {
        return altura;
    }

    public void setLargura(int largura) {
        if(largura > 0) this.largura = largura;
    }

    public void setAltura(int altura) {
        if(altura > 0) this.altura = altura;
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
