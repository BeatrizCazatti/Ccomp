package modelo;

public class Sequencia {
    private int inicio, fim;

    public Sequencia (int inicio, int fim){
        if(inicio < fim) {
            this.inicio = inicio;
            this.fim = fim;
        }
    }

    public int getIniciio(){ return this.inicio; }

    public int getFim(){ return this.fim; }

    public void imprimir(){
        imprimir(1);
    }

    public void imprimir(int p){
        if(this.inicio < this.fim){
            for(int i = this.inicio; i <= this.fim; i += p){
                System.out.printf("%d\n", i);
            }
        }
    }
}
