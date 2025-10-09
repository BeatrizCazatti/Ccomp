package modelo;

public class SegmentoDeReta {
    private Ponto ponto1, ponto2;

    public SegmentoDeReta(Ponto ponto1, Ponto ponto2){
        this.ponto1 = ponto1;
        this.ponto2 = ponto2;
    }
    public float tamanho(){
        return ponto1.distanciaPonto(ponto2);
    }
    
}