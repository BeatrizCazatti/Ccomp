package tipo;

public class Type {
    private int e;
    public Type(int e){
        this.e = e;
    }
    
    public void define(float num){
        System.out.println("Float");
    }
        
    public void define(int num){
        System.out.println("Inteiro");
    }
    public void define(double num){
        System.out.println("Double");
    }
}
