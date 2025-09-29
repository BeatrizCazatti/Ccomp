package modelo;

public class ContaBancaria {
    private String titular;
    private String numeroConta;
    private float saldo;
    
    
    public ContaBancaria(String titular, String numeroConta, float saldo) {
        this.titular = titular;
        this.numeroConta = numeroConta;
        this.saldo = 0;
    }

    public void depositar (float valor){
        if(valor >= 0) this.saldo += valor;
    }

    public void sacar (float valor) {
        if(saldo >= valor + 1.5) saldo -= valor + 1.5;
    }

    public void exibirInformacoes (){
        System.out.println(titular);
        System.out.println(numeroConta);
        System.out.println(saldo);
    }

    public String getTitular(){
        return this.titular;
    }

    public String getNumeroConta() {
        return this.numeroConta;
    }

    public float getSaldo() {
        return this.saldo;
    }

    public void setTitular (String novoTitular){
        this.titular = novoTitular;
    }
    
    public void setNumeroConta (String novoNumeroConta){
        this.numeroConta = novoNumeroConta;
    }
}
