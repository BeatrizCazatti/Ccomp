package modelo;

public class Piloto {
    private String nome;
    private int habilidade;
    private int moedas;
    private Kart kart;
    private Item[] itensColetados;
    private int qtdItensColetados;

    public Piloto(String nome, int habilidade) {
        if (nome != null && habilidade > 0 && habilidade <= 100){
            this.nome = nome;
            this.habilidade = habilidade;
            this.moedas = 0;
            this.itensColetados = new Item[4];
            this.qtdItensColetados = 0;
        }
    }

    public void setKart(Kart kart){
        if(kart != null) this.kart = kart;
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

    private int posicaoItem(String nome){
        for(int i = 0; i < itensColetados.length; i++){
            if(itensColetados[i] != null & itensColetados[i].getNome().equals(nome)) return i;
        }
        return -1;
    }

    public void coletarItem(Item item){
        for(Item i : this.itensColetados){
            if(item.getNome().equals(i.getNome())){
                i.setQuantidade(1);
                this.qtdItensColetados++;
            }else if(this.itensColetados.length < 4){
                itensColetados[qtdItensColetados - 1] = item;
            }
        }
    }

    public void gastarItem(String nome) {
        for(Item i : this.itensColetados){
            if(i.getNome().equals(nome)) i.serUsado();
            if(i.getQuantidade() == 0) removerItem(i);
        }
    }

    //ultimo item entra no lugar do item removido
    public void removerItem(Item item) {
        int pos = posicaoItem(nome);
        if(pos != -1) itensColetados[pos].serUsado();
    }

    @Override
    public String toString() {
        return "Piloto{" +
                "nome='" + nome + '\'' +
                ", habilidade=" + habilidade +
                ", moedas=" + moedas +
                '}';
    }

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
}


