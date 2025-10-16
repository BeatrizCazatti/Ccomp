package modelo;

public class Piloto {
    private String nome;
    private int habilidade;
    private int moedas;
    private Kart kart;
    private Item[] itensColetados;

    public Piloto(String nome, int habilidade, int velocidadeMax, Item[] itensColetados) {
        if (nome != null && habilidade >=0 && habilidade <= 100 && validaItens(itensColetados)){
            this.nome = nome;
            this.habilidade = habilidade;
            this.moedas = 0;
            this.itensColetados = itensColetados;
            this.kart = new Kart(velocidadeMax, this);
        }
    }

    private boolean validaItens(Item[] itensColetados) {
        if(itensColetados == null || itensColetados.length > 4) return false;

        for(int i = 0; i < itensColetados.length; i++){
            for(int j = i + 1; j < itensColetados.length; j++){
                if(itensColetados[i].getNome().equals(itensColetados[j].getNome())) return false;
            }
        }
        
        return true;
    }
    
    public int getHabilidade() {
        return habilidade;
    }

    public void coletarMoedas(int qtd){
        if (qtd < 0) return;

        if (moedas + qtd <= 99){
            moedas += qtd;
        } else{
            moedas = 99;
        }
    }

    public void perderMoedas(int qtd){
        if (qtd < 0) return;

        if (qtd > 0 && (moedas - qtd >= 0)){
            moedas -= qtd;
        } else{
	        moedas = 0;
	    }
    }

    public void fazerCurva(int grauCurva){
        if (grauCurva > habilidade){
            this.kart.derrapar();
            perderMoedas(grauCurva - habilidade);
        } else{
            this.kart.efetivarCurva();
        }
    }

    public void coletarItem(Item item){
        for(Item i : this.itensColetados){
            if(item.getNome().equals(i.getNome())){
                i.setQuantidade(1);
            }else if(this.itensColetados.length < 4){
                itensColetados[itensColetados.length - 1] = item;
            }
        }
    }

    public void gastarItem(String nome) {
        for(Item i : this.itensColetados){
            if(i.getNome().equals(nome)) i.serUsado();
            if(i.getQuantidade() == 0) removerItem(i);
        }
    }

    public void removerItem(Item item) {
        Item[] novos = new Item[itensColetados.length];
        int idx = 0;
        for(Item i : itensColetados){
            if(i != item) {
                novos[idx++] = i;
            }
        }
    }

    public void usarItem(Item item){
        int poder = item.serUsado();

        switch (item.getNome()){
            case "Cogumelo":{
                kart.acelerar(poder*habilidade);
                break;
            }
            case "Casco":{
                perderMoedas(poder);
                habilidade = 1;
                break;
            }
            case "Banana":{
                kart.frear((int)poder/habilidade);
                habilidade = 1;
                break;
            }
            case "Estrela":{
                habilidade += poder;
                break;
            }
        }
    }

    @Override
    public String toString() {
        return "Piloto{" +
                "nome='" + nome + '\'' +
                ", habilidade=" + habilidade +
                ", moedas=" + moedas +
                '}';
    }

    //vai ajudar o adversario?
    public void usarItem(Item item, Piloto pilotoAdversario){
        int poder = item.serUsado();

        switch (item.getNome()){
            case "Cogumelo":{
                pilotoAdversario.kart.acelerar(poder*habilidade);
                break;
            }
            case "Casco":{
                pilotoAdversario.perderMoedas(poder);
                pilotoAdversario.habilidade = 1;
                break;
            }
            case "Banana":{
                pilotoAdversario.kart.frear((int)poder/habilidade);
                pilotoAdversario.habilidade = 1;
                break;
            }
            case "Estrela":{
                pilotoAdversario.habilidade += poder;
                break;
            }
        }
    }
}
