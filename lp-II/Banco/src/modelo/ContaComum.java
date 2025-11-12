public class ContaComum extends Conta implements Sacavel {
    private String codigo;
    private Endereco localidade;
    private Cliente cliente;
    private ArrayList <Conta> contas;
    public ContaComum(String codigo) {
        this.codigo = codigo;

    }
}
