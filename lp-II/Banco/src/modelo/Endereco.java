public class Endereco {
    protected String logradouro;
    protected int numero;
    protected String bairro;
    protected String cidade;
    protected String estado;
    protected int cep;

    public Endereco (String logradouro, int numero, String bairro, String cidade, String estado, int cep) {
        this.logradouro = logradouro;
        this.numero = numero;
        this.bairro = bairro;
        this.cidade = cidade;
        this.estado = estado;
        this.cep = cep;
    }
}
