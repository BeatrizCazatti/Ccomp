import modelo.Cartao;
import modelo.Catraca;

public class Main {
    public static void main(String[] args) {
        Cartao cartao = new Cartao("C123");
        Catraca catraca = new Catraca("CAT-01");

        cartao.debitaValor(10);
        System.out.println("Saldo inicial do cartão: " + cartao.getSaldo());

        catraca.registrarPassagem("10h30min", 3.5f, cartao);
        catraca.exibirStatus();
        System.out.println("Saldo do cartão após passagem: " + cartao.getSaldo());

        catraca.registrarPassagem("11h00", 20f, cartao);
        catraca.exibirStatus();
    }
}
