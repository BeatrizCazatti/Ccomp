package modelo;

import java.time.LocalDate;

public class ContaPoupanca extends Conta implements Sacavel, Rentavel {
    protected LocalDate dataUltimoRendimento;
    protected float percRendimento;

    public ContaPoupanca (Cliente cliente, String numero, Agencia agencia, float perc) {
        super(cliente, numero, agencia);
        dataUltimoRendimento = null;
        percRendimento = perc;
   }

   @Override
   public void sacarValor(float valor) {
        float taxa = this.getTaxaSaque();
        if(valor > 0 && saldo >= valor + taxa) {
            this.saldo -= valor + taxa;
        }
   }
    @Override
    public void render() {
        if(dataUltimoRendimento == null || LocalDate.now().isAfter(LocalDate.now().plusMonths(1))) {
            saldo += saldo * percRendimento;
            dataUltimoRendimento = LocalDate.now();
        }
    }
}
