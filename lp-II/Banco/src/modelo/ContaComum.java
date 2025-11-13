package modelo;

public class ContaComum extends Conta implements Sacavel {
   public ContaComum (Cliente cliente, String numero, Agencia agencia) {
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
