import modelo.*;

public class Main {
    public static void main(String[] args) {
        Endereco casa = new Endereco("casa engracada", 0, "dos bobos", "SG", "RJ", 0);
        Endereco localidade = new Endereco("banco", 0, "avenida", "SG", "RJ", 100);
        Cliente beatriz = new Cliente("Beatriz", "111.111.111-37", casa, TipoCliente.TRADICIONAL);
        Agencia carioca = new Agencia("123", localidade);
        ContaComum contabb = new ContaComum(beatriz, "1234567", carioca);
        beatriz.adicionarConta(contabb);
        beatriz.exibirInformacoes();
    }
}

