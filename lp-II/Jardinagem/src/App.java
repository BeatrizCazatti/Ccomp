import modelo.Planta;
import modelo.Regador;
import modelo.TesouraDePoda;

public class App {
    public static void main(String[] args) throws Exception {
        Planta plantinha = new Planta(25, 4);
        Regador regadorzinho = new Regador(5000);
        TesouraDePoda tesourinha = new TesouraDePoda();

        System.out.printf("Ramos podados: %d\n", tesourinha.podar(5, plantinha));
        regadorzinho.encher(30000000);
        System.out.printf("Volume do regardozinho: %d\n", regadorzinho.getVolumeAtualMl());
        System.out.println(regadorzinho.regar(200000, plantinha));
        System.out.println(regadorzinho.regar(20, plantinha));
        System.out.printf("Desgaste da tesourinha: %d\n", tesourinha.getPercentualDesgastado());
    }
}
