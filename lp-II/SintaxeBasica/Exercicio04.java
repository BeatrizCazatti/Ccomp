import tipo.Type;

public class Exercicio04 {
    public static void main(String[] args){
        Type.define(5 * 4 / 6 + 7);
        Type.define(5 * 4 / (6 + 7));
        Type.define(5 * 4.0 / 6 + 7);
        Type.define(5 * 4 % 6 + 7);
        Type.define(5 * 4 / (float)6 + 7);
        Type.define((4 / 3) + (3.0 * 5));
        Type.define((4 / 3.0) + (3 * 5));
        Type.define((int)(4 / 3.0) + (3 * 5));
    }
}