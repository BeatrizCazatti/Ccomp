import modelo.PlanoAssinatura;

public class App {
    public static void main(String[] args) throws Exception {
        PlanoAssinatura p1 = new PlanoAssinatura("basico");
        p1.ofertarDesconto(10);
        p1.ofertarDesconto(70);
        p1.exibirInformacoes();

        p1.adicionarAssinante();
        p1.adicionarAssinante();
        p1.adicionarAssinante();
        p1.adicionarAssinante();
        p1.exibirInformacoes();

        p1.exibirInformacoes();
    }
}
