package modelo;

public class Triangulo {
    private SegmentoDeReta[] lados;
    private float[] tamLados = new float[3];

    public Triangulo(Ponto pt1, Ponto pt2, Ponto pt3) {
        SegmentoDeReta ladoA = new SegmentoDeReta(pt1, pt2);
        SegmentoDeReta ladoB = new SegmentoDeReta(pt2, pt3);
        SegmentoDeReta ladoC = new SegmentoDeReta(pt1, pt3);
        this.lados = new SegmentoDeReta[3];
        this.tamLados[0] = lados[0].tamanho();
        this.tamLados[1] = lados[1].tamanho();
        this.tamLados[2] = lados[2].tamanho();
    

        if(ladoA.tamanho() < ladoC.tamanho() + ladoB.tamanho() && ladoB.tamanho() < ladoA.tamanho() + ladoC.tamanho() && ladoC.tamanho() < ladoA.tamanho() + ladoB.tamanho()){
            this.lados[0] = ladoA; this.lados[1] = ladoB; this.lados[2] = ladoC;
        }
    }

    public Triangulo(Triangulo tri){
        this.lados[0] = tri.lados[0]; 
        this.lados[1] = tri.lados[1]; 
        this.lados[2] = tri.lados[2];
    }

    public void desenhar(){
        System.out.printf("Triangulo(%d, %d, %d)\n", this.lados[0], this.lados[1], this.lados[2]);
    }

    // public SegmentoDeReta getLado0() {
    //     return lados[0];
    // }

    // public SegmentoDeReta getLado1() {
    //     return lados[1];
    // }

    // public SegmentoDeReta getLado2() {
    //     return lados[2];
    // }

    // public void setA(SegmentoDeReta novoA) {
    //     if(novoA.tamanho() < ladoB.tamanho() + ladoC.tamanho()){ this.ladoA = novoA;}
    // }

    // public void setB(SegmentoDeReta novoB) {
    //     if(novoB.tamanho() < ladoA.tamanho() + ladoC.tamanho()){ this.ladoB = novoB;}
    // }

    // public void setC(SegmentoDeReta novoC) {
    //     if(novoC.tamanho() < ladoA.tamanho() + ladoB.tamanho()){ this.ladoC = novoC;}
    // }    

    public float getArea() {
        float altura = tamLados[0] > tamLados[1] ? tamLados[0] : tamLados[1];
        float base = tamLados[1] > tamLados[2] ? tamLados[1] : tamLados[2];
        return (base * altura) / 2;
    }
}
