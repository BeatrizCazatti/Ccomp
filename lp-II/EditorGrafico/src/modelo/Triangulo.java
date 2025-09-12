package modelo;

public class Triangulo {
    private int a, b, c;
    
    private Triangulo(int a, int b, int c) {
        if(a < c + b && b < a + c && c < a + b){
            this.a = a; this.b = b; this.c = c;
        }
    }

    private Triangulo(Triangulo tri){
        this.a = tri.a; 
        this.b = tri.b; 
        this.c = tri.c;
    }

    public void desenhar(){
        System.out.printf("Triangulo(%d, %d, %d)\n", this.a, this.b, this.c);
    }

    public int getA() {
        return a;
    }

    public int getB() {
        return b;
    }

    public int getC() {
        return c;
    }

    public void setA(int novoA) {
        if(novoA < b + c){ this.a = novoA;}
    }

    public void setB(int novoB) {
        if(novoB < a + c){ this.a = novoB;}
    }

    public void setC(int novoC) {
        if(novoC < a + b){ this.a = novoC;}
    }    
}
