package modelo;

//adicionarAssinantes boolean; tira métodos gets e setters(ferem o encapsulamento, não há a necessidade gets dentro ) 
public class PlanoAssinatura {
    private String nomePlano;
    private int limitePlanos;
    private int qtdAssinantes;
    private float valorDoPlano;

    public PlanoAssinatura(String nomePlano){
        this.nomePlano = nomePlano;
        this.limitePlanos = 3;
        this.valorDoPlano = 100;
        this.qtdAssinantes = 0;
    }

    public boolean adicionarAssinante(){
        if(this.qtdAssinantes < this.limitePlanos) {
            qtdAssinantes+=1;
            return true;
        }
        return false;
    }

    public void ofertarDesconto(float desconto){
        if (desconto < 0.5*valorDoPlano ){
            valorDoPlano -= desconto;
        }
    }

    public void exibirInformacoes(){
        System.out.println(this.nomePlano);
        System.out.println(this.qtdAssinantes);
        System.out.println(this.valorDoPlano);
    }

    
}
