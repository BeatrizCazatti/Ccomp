package modelo;

public class Impressora {
    private boolean status;
    private int nivelTinta;
    private int qtdFolhas;

    public Impressora(int nivelTinta, int qtdFolhas) {
        this.status = false;
        this.nivelTinta = nivelTinta;
        this.qtdFolhas = qtdFolhas;
    }

    
}
