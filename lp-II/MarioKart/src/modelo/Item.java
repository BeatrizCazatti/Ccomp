package modelo;

public class Item {
    private String nome;
    private int quantidade;
    private int poder;

    public Item(String nome, int poder) {
        if(nome != null && poder >= 1){
            this.nome = nome;
            this.quantidade = 0;
            this.poder = poder;
        }
    }

    public void reabastecer(int qtd) {
        if (qtd < 0) return;
        if (quantidade + qtd <= 20){
            quantidade += qtd;
        } else {
            quantidade = 20;
        }
    }

    public int serUsado(){
        if(this.quantidade > 0){
            quantidade--;
            return this.poder;
        }else return 0;
    }

    public String getNome() {
        return nome;
    }

    public int getQuantidade() {
        return quantidade;
    }

    public void setQuantidade(int quantidade) {
        this.quantidade += quantidade;
    }

    
}