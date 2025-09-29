package modelo;

public class CanetaPiloto {
    private float carga;

    public CanetaPiloto(float carga) {
        this.carga = carga;
    }

    public boolean escrever(float cargaASerGasta, Quadro quadro){
        float cargaAEscrever = 0;

        if(this.carga >= cargaAEscrever)
            cargaAEscrever = cargaASerGasta;
        else cargaAEscrever = this.carga;


        float percentPreenchido =  quadro.sePreencher(cargaAEscrever);
        this.carga -= percentPreenchido;
        return percentPreenchido > 0;
        //quadro.setPercentualPreenchido(quadro.getPercentualPreenchido() + cargaAEscrever);
    }
}