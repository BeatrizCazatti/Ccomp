package modelo;

public class TesouraDePoda {
    private int percentualDesgastado;

    public TesouraDePoda() {
        this.percentualDesgastado = 0;
    }

    public int podar(int qtdRamos, Planta planta){
        //int qtdRamosPodados = 0;
        int podePodar = 100 - percentualDesgastado;
        if(podePodar > 0){
            this.percentualDesgastado -= qtdRamos;
            planta.serPodada(qtdRamos);
            return qtdRamos;
        } else {
            this.percentualDesgastado = 100;
            planta.serPodada(100 - qtdRamos);
        }
        return podePodar;
    }

    public void afiar(int qtdSegundos){
        if(percentualDesgastado - qtdSegundos > 0) {
            percentualDesgastado -= qtdSegundos;
        } else {
            percentualDesgastado = 0;
        }
    }
}
