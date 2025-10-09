package modelo;

public class Ponto {
    private int x, y;

    public Ponto(int x, int y){
        this.x = x;
        this.y = y;
    }

    public void mover(int x, int y){
        this.x = x;
        this.y = y;
    }
    public int getX() {
        return x;
    }

    public void setX(int x) {
        this.x = x;
    }

    public int getY() {
        return y;
    }

    public void setY(int y) {
        this.y = y;
    }

    public String coordenadas() {
        return "x = " + this.x + " " + " y = " + this.y;
    }

    public float distanciaPonto(Ponto ponto2){
        return (float)Math.sqrt(Math.pow(this.x - ponto2.getX(), 2) + Math.pow(this.y - ponto2.getY(), 2));
    }
    
}