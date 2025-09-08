import tipo.Type;

public class Exercicio04 {
    public static void main(String[] args){
        Type tipo = new Type(2);
        tipo.define(5 * 4 / 6 + 7);
        tipo.define(5 * 4 / (6 + 7));
        tipo.define(5 * 4.0 / 6 + 7);
        tipo.define(5 * 4 % 6 + 7);
        tipo.define(5 * 4 / (float)6 + 7);
        tipo.define((4 / 3) + (3.0 * 5));
        tipo.define((4 / 3.0) + (3 * 5));
        tipo.define((int)(4 / 3.0) + (3 * 5));
    }
}