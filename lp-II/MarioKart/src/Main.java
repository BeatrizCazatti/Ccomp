import modelo.Item;
import modelo.Kart;
import modelo.Piloto;

public class Main {
    public static void main(String[] args) {

        Item cogumelo = new Item("Cogumelo", 2);
        Item casco = new Item("Casco", 3);
        Item banana = new Item("Banana", 5);
        Item estrela = new Item("Estrela", 7);

        Item[] itens = {cogumelo, casco, banana, estrela};
        Kart oroch = new Kart(100, null);
        Piloto mario = new Piloto("Mario", 10, itens, oroch);

        System.out.println(mario);
        System.out.println(cogumelo);
        System.out.println(casco);
        System.out.println(banana);
        System.out.println(estrela);

        mario.coletarMoedas(50);
        mario.acelerar(100);
        cogumelo.reabastecer(2);
        casco.reabastecer(3);
        banana.reabastecer(5);
        estrela.reabastecer(7);

        System.out.println(mario);
        System.out.println(cogumelo);
        System.out.println(casco);
        System.out.println(banana);
        System.out.println(estrela);


        System.out.printf("\nUsando a Estrela\n");
        mario.usarItem(estrela);
        System.out.println(mario);
        System.out.println(estrela);

        System.out.printf("\nUsando o Cogumelo\n");
        mario.usarItem(cogumelo);
        System.out.println(mario);
        System.out.println(cogumelo);

        System.out.printf("\nUsando a Banana\n");
        mario.usarItem(banana);
        System.out.println(mario);
        System.out.println(banana);

        System.out.printf("\nUsando o Casco\n");
        mario.usarItem(casco);
        System.out.println(mario);
        System.out.println(casco);


    }
}