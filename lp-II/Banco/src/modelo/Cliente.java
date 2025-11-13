package modelo;
import java.util.ArrayList;

public class Cliente {
    private String nome;
    private String cpf;
    private Endereco moradia;
    private TipoCliente tipo;
    private ArrayList<Conta> contas;

    public Cliente(String nome, String cpf, Endereco moradia, TipoCliente tipo){
        super();
        this.nome = nome;
        this.cpf = cpf;
        this.moradia = moradia;
        this.tipo = tipo;
        this.contas = new ArrayList<Conta> (4);
    }
    public TipoCliente getTipo() {
        return tipo;
    }

    public boolean adicionarConta(Conta c) {
        for (Conta conta : contas) {
            if(conta.getClass().equals(c.getClass())){
                return false; 
            } 
        }
        contas.add(c);
        return true;
    }

    public void exibirInformacoes() {
		System.out.println("nome: " + nome);
		System.out.println("cpf: " + cpf);
		System.out.println("moradia: " + moradia);
		System.out.println("===== Informacoes da(s) Conta(s) =====");
        for (Conta c : contas){
            System.out.println("- Conta " + c.getClass() + ":");
            System.out.println("    - saldo: " + c.saldo);

        }

	}

}
