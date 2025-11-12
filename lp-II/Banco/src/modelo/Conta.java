import java.time.LocalDate;

public abstract class Conta {
    protected Cliente cliente;
    protected String numero;
    protected float saldo;
    protected LocalDate dataAbertura;
    protected Agencia agencia;

    public Conta (Cliente cliente, String numero, float saldo, LocalDate dataAbertura, Agencia agencia) {
        this.cliente = cliente;
        this.numero = numero;
        this.saldo = saldo;
        this.dataAbertura = dataAbertura;
        this.agencia = agencia;
    }
    protected float getTaxaSaque() {
        if(cliente.getTipo().equals(TipoCliente.VIP)) return 0; else return 1.5f;
    }

    public boolean adicionarConta(Conta c) {
        conta
        return true;
    }
}
