import modelo.Documento;
import modelo.Impressora;

public class Main {
    public static void main(String[] args) {
        Impressora brother = new Impressora(10, 20);
        Documento doc = new Documento(12);       

        brother.ligar();

        System.out.println("Iniciando impressão...");
        System.out.println("Folhas impressas: " + brother.imprimir(doc));
        System.out.println("Cópias impressas até agora: " + doc.verificarQtdCopiasImpressas());
        System.out.println("Tinta restante: " + brother.getNivelTinta());
        System.out.println("Folhas restantes na impressora: " + brother.getQtdFolhas());

        System.out.println("\nNova tentativa de impressão:");
        System.out.println("Folhas impressas: " + brother.imprimir(doc));
        System.out.println("Cópias impressas até agora: " + doc.verificarQtdCopiasImpressas());
        System.out.println("Tinta restante: " + brother.getNivelTinta());
        System.out.println("Folhas restantes na impressora: " + brother.getQtdFolhas());

        brother.reabastecerFolhas(50);
        brother.reabastecerTinta(20);

        
        System.out.println("\nApós reabastecimento:");
        System.out.println("Folhas impressas: " + brother.imprimir(doc));
        System.out.println("Cópias impressas até agora: " + doc.verificarQtdCopiasImpressas());
        System.out.println("Tinta restante: " + brother.getNivelTinta());
        System.out.println("Folhas restantes na impressora: " + brother.getQtdFolhas());
    }
}
