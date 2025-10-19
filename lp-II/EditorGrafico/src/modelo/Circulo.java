package modelo;

public class Circulo {
    private int r;
    private Ponto ponto;

    public Circulo(int r, int x, int y){
        this.r = r;
        this.ponto = new Ponto(x, y);
    }

    public void desenharDeVerdade(){
        for(int c = 0; c < ponto.getY() - 1; c++){
            System.out.print("\n");
        }
        for (int i = 0; i <= r*2; i++) {
            for(int c = 0; c < ponto.getX(); c++){
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

    public int getR() {
        return r;
    }

    public void setR(int novoR) {
        if(r > 0) { r = novoR; }
    }

    public void desenhar() {
        System.out.printf("%s r = %d\n", ponto.coordenadas(), this.r);
    }

    public int getArea() {
        return (int) 3.14*(this.r * this.r);
    }

}