package modelo;

public class ContaPoupanca extends Conta implements Sacavel, Rentavel {
    private float rendimentoMensal;
    public ContaPoupanca (Agencia agencia, String numero, Cliente cliente, float perc) {
        super(cliente, numero, agencia);
        this.rendimentoMensal = perc;
   }

   @Override
   public void sacarValor(float valor) {
        float taxa = this.getTaxaSaque();
        if(valor > 0 && saldo >= valor + taxa) {
            this.saldo -= valor + taxa;
        }
   }
    @Override
    public void mandaRender() {
        
    }
}
