package modelo;
//import modelo.Documento;

public class Impressora {
    private boolean status;
    private float nivelTinta;
    private int qtdFolhas;

    public Impressora(int nivelTinta, int qtdFolhas) {
        this.status = false;
        this.nivelTinta = nivelTinta;
        this.qtdFolhas = qtdFolhas;
    }

    public int imprimir(Documento doc) {
        if(this.status == true && this.qtdFolhas > 0 && this.nivelTinta > 0.2f) {
            if(this.qtdFolhas >= doc.folhasAImprimir() && this.nivelTinta >= doc.folhasAImprimir()*0.2f){
                return doc.folhasAImprimir();
            } else {
                return this.qtdFolhas - nivelTinta/0.2f;
            }
        }
    }
    
    public void reabastecerTinta(int qtdTinta) {
        if (qtdTinta < 0) return;
        if (this.nivelTinta + qtdTinta <= 100) nivelTinta += qtdTinta;
        else nivelTinta = 100;
    }

    public void reabastecerFolhas(int qtdFolhas){
        if (qtdFolhas < 0) return;
        if (this.qtdFolhas + qtdFolhas <= 100) this.qtdFolhas += qtdFolhas;
        else this.qtdFolhas = 100;
    }

    public void ligar(){
        this.status = true;
    }

    public void desligar(){
        this.status = false;
    }
}
