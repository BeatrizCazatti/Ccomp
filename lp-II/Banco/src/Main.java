import modelo.*;

public class Main {
    public static void main(String[] args) {
        Endereco casa = new Endereco("Rua dos Bobos", 0, "Laranjeiras", "SG", "RJ", "00000-000");
        Endereco localidade = new Endereco("Tv Agencia", 99, "avenida", "SG", "RJ", "99999-999");

        Cliente beatriz = new Cliente("Beatriz", "111.111.111-11", casa, TipoCliente.TRADICIONAL);

        Agencia carioca = new Agencia("1234", localidade);

        ContaComum contacom = new ContaComum(beatriz, "111", carioca);
        beatriz.adicionarConta(contacom);
        contacom.depositar(20);
        beatriz.exibirInformacoes();
        
        ContaEspecial contaesp = new ContaEspecial(beatriz, "222", carioca, 100);
        beatriz.adicionarConta(contaesp);
        contaesp.depositar(50);
        contaesp.sacarValor(60);
        beatriz.exibirInformacoes();

        ContaInvestimento containv = new ContaInvestimento(beatriz, "333", carioca, 0.5f);
        beatriz.adicionarConta(containv);
        containv.depositar(100);
        containv.render();
        containv.render();
        beatriz.exibirInformacoes();

        ContaPoupanca contapou = new ContaPoupanca(beatriz, "444", carioca, 0.2f);
        beatriz.adicionarConta(contapou);
        contapou.depositar(40);
        contapou.render();
        beatriz.exibirInformacoes();

    }
}

