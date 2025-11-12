public class ContaPoupanca extends Conta implements Sacavel, Rentavel {
    public ContaPoupanca (Agencia agencia, String numero, Cliente cliente) {
        super(agencia, numero, cliente);
    }
}
