package modelo;

public class Quadro {
    private float percentualPreenchido;
    

    public Quadro(float percentualPreenchido) {
        this.percentualPreenchido = percentualPreenchido;
    }

    public float getPercentualPreenchido() {
        return percentualPreenchido;
    }

    public void setPercentualPreenchido(float preenchimento) {
        if(preenchimento > 0 && preenchimento <= 100)
            this.percentualPreenchido = preenchimento;
    }

    public float sePreencher(float qtdCarga){
        float espacoDisponivel = 100 - this.percentualPreenchido;

        if(qtdCarga <= espacoDisponivel){
            this.percentualPreenchido += qtdCarga;
            return qtdCarga;
        }else{
            this.percentualPreenchido += espacoDisponivel;
            return espacoDisponivel;
        }
    }
    // public float seApagar(float qtdApagar){
    //     if(this.percentualPreenchido > 0){
        
    //     }
    // }
}
