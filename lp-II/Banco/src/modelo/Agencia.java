import java.util.ArrayList;

public class Agencia {
    private String codigo;
    private Endereco localidade;
    private ArrayList<Conta> contas; 

    public Agencia(String codigo, Endereco localidade) {
        super();
        this.codigo =  codigo;
        this.localidade = localidade;
        this.contas = new ArrayList<Conta>(100);
    }

    public void abrirConta(String numero, Cliente cliente) {
        
    }
}
