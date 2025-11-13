package modelo;
import java.util.ArrayList;

public class Agencia {
    private String codigo;
    private Endereco localidade;
    private ArrayList<Conta> contas; 
    private ArrayList<Conta> contasRendimento; 

    public Agencia(String codigo, Endereco localidade) {
        super();
        this.codigo =  codigo;
        this.localidade = localidade;
        this.contas = new ArrayList<Conta> (100);
        this.contasRendimento = new ArrayList<Rentavel> (20);
    }

    public void abrirConta(TipoConta tipoConta, String numero, Cliente cliente) {
		if (tipoConta.equals(TipoConta.CONTA_COMUM)) {
			ContaComum conta = new ContaComum(this, numero, cliente);
			contas.add(conta);
		} else if (tipoConta.equals(TipoConta.CONTA_ESPECIAL))  {
			ContaEspecial conta = new ContaEspecial(this, numero, cliente, 0);
			contas.add(conta);
		} else if (tipoConta.equals(TipoConta.CONTA_INVESTIMENTO))  {
			ContaInvestimento conta = new ContaInvestimento(this, numero, cliente, 0.2f);
			contas.add(conta);
			contasRendimento.add(conta);
		} else if (tipoConta.equals(TipoConta.CONTA_POUPANCA))  {
			ContaPoupanca conta = new ContaPoupanca(this, numero, cliente, 0.1f);
			contas.add(conta);
			contasRendimento.add(conta);
		}
	}
}
