package modelo;

public class Documento {
    private int folhasTotais;
    private int folhasImpressas;

    public Documento(int folhas){
        this.folhasTotais = folhas;
        this.folhasImpressas = 0;
    }

    public int folhasAImprimir(){
        if(this.folhasImpressas % this.folhasTotais == 0) return this.folhasTotais;
        else return this.folhasTotais - (this.folhasImpressas % this.folhasTotais);
    }

    public void registrarImpressao(int folhasImpressas){
        this.folhasImpressas += folhasImpressas;
    }

    public float verificarQtdCopiasImpressas(){
        if(this.folhasTotais == 0) return 0;
        else return (float)this.folhasImpressas / this.folhasTotais;
    }
}
