package modelo;
//import modelo.Documento;

public class Impressora {
    private boolean status;
    private float nivelTinta;
    private int qtdFolhas;

    public Impressora(int nivelTinta, int qtdFolhas) {
        if(nivelTinta >= 0 && nivelTinta <= 100 && qtdFolhas >= 0 && qtdFolhas <= 100){
            this.status = false;
            this.nivelTinta = nivelTinta;
            this.qtdFolhas = qtdFolhas;
        }
    }

    public int imprimir(Documento doc) {
        if (!status) return 0;
        if (qtdFolhas <= 0 || nivelTinta <= 0) return 0;

        int maxPorTinta = (int)nivelTinta * 5;
        int possivel = maxPorTinta <= qtdFolhas ? maxPorTinta : qtdFolhas;
        int folhasImpressas = doc.folhasAImprimir() <= possivel ? doc.folhasAImprimir() : possivel;
        doc.registrarImpressao(folhasImpressas);
        this.qtdFolhas -= folhasImpressas;
        this.nivelTinta -= folhasImpressas / 5f;

        return folhasImpressas;
    }
    
    public void reabastecerTinta(int qtdTinta) {
        if (qtdTinta <= 0) return;
        if (this.nivelTinta + qtdTinta <= 100) nivelTinta += qtdTinta;
        else nivelTinta = 100;
    }

    public void reabastecerFolhas(int qtdFolhas){
        if (qtdFolhas <= 0) return;
        if (this.qtdFolhas + qtdFolhas <= 100) this.qtdFolhas += qtdFolhas;
        else this.qtdFolhas = 100;
    }

    public void ligar() { this.status = true; }

    public void desligar(){ this.status = false; }

    public float getNivelTinta() { return nivelTinta; }
    public int getQtdFolhas() { return qtdFolhas; }
    public boolean isLigada() { return status; }
}
