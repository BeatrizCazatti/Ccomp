import modelo.ContaBancaria;

public class Main {
    public static void main(String[] args) {
        ContaBancaria conta1 = new ContaBancaria("Beatriz Cazatti", "12345-6", 1000);

        System.out.println("Informações iniciais:");
        conta1.exibirInformacoes();

        conta1.depositar(500);
        System.out.println("\nApós depósito de 500:");
        conta1.exibirInformacoes();

        conta1.sacar(200);
        System.out.println("\nApós saque de 200:");
        conta1.exibirInformacoes();

        conta1.sacar(400);
        System.out.println("\nTentativa de saque de 400:");
        conta1.exibirInformacoes();

        conta1.setTitular("Talita Vieira");
        conta1.setNumeroConta("98765-4");
        System.out.println("\nApós atualização dos dados:");
        conta1.exibirInformacoes();
    }
}
