import java.time.LocalDate;

public abstract class Conta {
    protected LocalDate dataAbertura;
    protected String numero;
    protected float saldo;
    protected Agencia agencia;
    protected Cliente cliente;

    public Conta (Cliente cliente, String numero, Agencia agencia) {
        super();
        this.dataAbertura = LocalDate.now();
        this.numero = numero;
        this.saldo = 0;
        this.agencia = agencia;
        if (cliente.adicionarConta(this)) {
			this.cliente = cliente;
		}
    }
    protected float getTaxaSaque() {
        if(cliente.getTipo().equals(TipoCliente.VIP)) return 0; else return 1.5f;
    }

    public void depositar (float valor) {
        if (valor > 0) { 
            this.saldo += valor;
        }
    }

    public float consultarSaldo () {
        return this.saldo;
    }
}
