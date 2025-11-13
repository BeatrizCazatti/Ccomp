public class ContaEspecial extends Conta implements Sacavel{
    private float limite;

    public ContaEspecial (Agencia agencia, String numero, Cliente cliente, float limite) {
        super(cliente, numero, agencia);
        this.limite = limite;
   }

   @Override
   public void sacarValor(float valor) {
    float taxa = this.getTaxaSaque();
        if(valor > 0 && saldo + limite >= valor + taxa) {
            if(saldo >= valor + taxa){
                this.saldo -= valor + taxa;
            } else {
                limite -= saldo + taxa;
                saldo = 0;
            }
        }
   }
}
