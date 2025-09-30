import modelo.Impressora;
import modelo.Documento;

public class App {
    public static void main(String[] args) throws Exception {
        Documento doc = new Documento(10);
        System.out.println(doc.folhasAImprimir());

    }
}
