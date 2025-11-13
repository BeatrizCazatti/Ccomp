package modelo;
import java.time.LocalDate;

public class ContaInvestimento extends Conta implements Rentavel{
    protected LocalDate dataUltimoRendimento;
    protected float percRendimento;

    public ContaInvestimento (Cliente cliente, String numero, Agencia agencia, float perc) {
        super(cliente, numero, agencia);
        dataUltimoRendimento = null;
        percRendimento = perc;
   }
   @Override
    public void render() {
        if(dataUltimoRendimento == null || LocalDate.now().isAfter(dataUltimoRendimento.plusDays(1))){
            saldo += saldo * percRendimento;
            dataUltimoRendimento = LocalDate.now();
        }
    }
}
