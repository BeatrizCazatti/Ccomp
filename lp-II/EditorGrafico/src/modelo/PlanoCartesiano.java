package modelo;

public class PlanoCartesiano {
    private int x;
    private int y;
    private Retangulo[] retangulos;
    private Circulo[] circulos;
    private Triangulo[] triangulos;
    private int qtdRetangulos;
    private int qtdCirculos;
    private int qtdTriangulos;

    public PlanoCartesiano(int x, int y){
        if(x <= 0 || y <= 0) return;
        this.x = x;
        this.y = y;
        this.retangulos = new Retangulo[10];
        this.circulos = new Circulo[10];
        this.triangulos = new Triangulo[10];
        this.qtdRetangulos = 0;
        this.qtdCirculos = 0;
        this.qtdTriangulos = 0;
    }

    public void addRetangulo(Retangulo r){
        if(r.getArea() <= areaDisponivel() && qtdRetangulos < retangulos.length) retangulos[qtdRetangulos++] = r;
    }

    public void addCirculo(Circulo c){
        if(c.getArea() <= areaDisponivel() && qtdCirculos < circulos.length) circulos[qtdCirculos++] = c;
    }

    public void addTriangulo(Triangulo t){
        if(t.getArea() <= areaDisponivel() && qtdTriangulos < triangulos.length) triangulos[qtdTriangulos++] = t;
    }

    private int areaDisponivel(){
        int areaOcupada = 0;
        for(Retangulo r : retangulos){
            if(r != null) areaOcupada += r.getArea();
        }
        for(Circulo c : circulos){
            if(c != null) areaOcupada += c.getArea();
        }
        for(Triangulo t : triangulos){
            if(t != null) areaOcupada += t.getArea();
        }
        return (int) (this.x * this.y) - areaOcupada;
    }

    public void desenharFormas() {
        System.out.println("=".repeat(this.x));
        System.out.println("retangulo(s):");
        for (int i = 0; i < qtdRetangulos; i++) retangulos[i].desenhar();
        System.out.println("circulo(s):");
        for (int i = 0; i < qtdCirculos; i++) circulos[i].desenhar();
        System.out.println("triangulo(s):");
        for (int i = 0; i < qtdTriangulos; i++) triangulos[i].desenhar();
        System.out.println("=".repeat(this.x));
    }

    public float getAreaTotal() {
        return x * y;
    }
    public float getAreaDisponivel() {
        return areaDisponivel();
    }
}
