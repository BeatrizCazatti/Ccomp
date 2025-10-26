package modelo;

public class Kart {
    private int velocidadeAtual;
    private int velocidadeMax;
    private float desgastePneus;
    private Piloto piloto;

    public Kart(int velocidadeMax, Piloto piloto) {
        if (velocidadeMax > 0){
            this.velocidadeAtual = 0;
            this.velocidadeMax = velocidadeMax;
            this.desgastePneus = 0;
            setPiloto(piloto);
        }
    }

    private void setPiloto(Piloto piloto){
        if(piloto != null) this.piloto = piloto;
    }
    
    private void desgastarPneus(float desgaste){
        if (desgastePneus + desgaste <= 100){
            desgastePneus += desgaste;
        } else{
            desgastePneus = 100;
        }
    }

    public void acelerar(int segundos){
        if (segundos < 0) return;

        if (velocidadeAtual + this.piloto.getHabilidade() * segundos <= velocidadeMax){
            velocidadeAtual += this.piloto.getHabilidade() * segundos;
        } else{
            velocidadeAtual = velocidadeMax;
        }

        desgastarPneus(segundos/3.0f);
    }

    public void frear(int segundos){
        if (segundos < 0) return;

        if (velocidadeAtual - this.piloto.getHabilidade() * segundos >= 0){
            velocidadeAtual -= this.piloto.getHabilidade() * segundos;
        } else{
            velocidadeAtual = 0;
        }
    }

    public void derrapar(){
        frear(5);
        desgastarPneus(12.5f);
    }

    public void efetivarCurva(){
        frear(2);
        acelerar(3);
    }

    public void trocarPneus(){
        this.desgastePneus = 0;
    }

    @Override
    public String toString() {
        return "Kart{" +
                "velocidadeAtual=" + velocidadeAtual +
                ", velocidadeMax=" + velocidadeMax +
                ", desgastePneus=" + desgastePneus +
                '}';
    }
}
