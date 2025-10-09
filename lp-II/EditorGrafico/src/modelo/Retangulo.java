package modelo;

public class Retangulo {
    private Ponto ponto;
    private int largura;
    private int altura;

    //quadrado: apenas 3 parametros
    public Retangulo(int x, int y, int lado) {
        this.ponto = new Ponto(x, y);
        this.largura = lado;
        this.altura = lado;
    }

    public Retangulo(int x, int y, int altura, int largura){
        this.ponto = new Ponto(x, y);
        this.altura = altura;
        this.largura = largura;
    }

    public int getX(){
        return ponto.getX();
    }
    public int getY() {
        return ponto.getY();
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

    public void desenharDeVerdade(){
        if(altura != largura){ System.out.printf("Retangulo(%d, %d, %d, %d)\n", this.ponto.getX(), this.ponto.getY(), this.largura, this.altura);
        } else { System.out.printf("Quadrado(%d, %d, %d)\n", this.ponto.getX(), this.ponto.getY(), this.largura); }
        //y:
        for(int c = 0; c < this.ponto.getY() - 1; c++){
            System.out.print("\n");
        }
        for(int i = 1; i <= this.altura; i++){
            //margem x
            for(int c = 0; c < this.ponto.getX() ; c++){
                System.out.print(" ");
            }
            if(i == 1 || i == this.altura){
                for(int j = 0; j < this.largura; j++){
                    System.out.print("* ");
                }
                System.out.println();
            }else{
                System.out.print("* ");
                for(int k = 0; k < this.largura - 2; k++){
                    System.out.print("  ");
                }
                System.out.print("* \n");
            }
        }
    }

    public void desenhar() {
        System.out.printf("%s %d %d\n", ponto.desenhar(), this.largura, this.altura);
    }}
