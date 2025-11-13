import modelo.*;

public class Main {
    public static void main(String[] args) {
        Endereco casa = new Endereco("casa engracada", 0, "dos bobos", "SG", "RJ", 0);
        Cliente beatriz = new Cliente("Beatriz", "111.111.111-37", casa, TipoCliente.TRADICIONAL);
    }
}
