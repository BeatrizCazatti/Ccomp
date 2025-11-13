public class ContaComum extends Conta implements Sacavel {
   public ContaComum (Agencia agencia, String numero, Cliente cliente) {
        super(cliente, numero, agencia);
   }

   @Override
   public void sacarValor(float valor) {
      float taxa = this.getTaxaSaque();
      if (valor > 0 && saldo >= valor + taxa) {
         this.saldo -= valor + taxa;
      }
   }
}
