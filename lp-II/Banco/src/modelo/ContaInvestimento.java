package modelo;

public class ContaInvestimento extends Conta implements Rentavel{
    private float rendimentoDiario;
    public ContaInvestimento (Agencia agencia, String numero, Cliente cliente, float perc) {
        super(cliente, numero, agencia);
        this.rendimentoDiario = perc;
   }
   @Override
    public void mandaRender() {
    }
}
