package modelo;

public class Cartao {
    private String id;
    private float saldo;

    public Cartao(String id) {
        this.id = id;
        this.saldo = 1000;
    }

    public String getId(){
        return this.id;
    }

    public float getSaldo(){
        return this.saldo;
    }

    public void debitaValor (float valor){
        if(saldo >= valor && valor > 0) saldo -= valor;
    }
}
