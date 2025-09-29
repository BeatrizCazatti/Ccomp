package modelo;

public class TesouraDePoda {
    private int percentualDesgastado;

    public TesouraDePoda() {
        this.percentualDesgastado = 0;
    }
    public int getPercentualDesgastado(){
        return this.percentualDesgastado;
    }
    public int podar(int qtdRamos, Planta planta){
        int qtdRamosPodemSerPodados = 0;
        if(percentualDesgastado + qtdRamos <= 100){
            qtdRamosPodemSerPodados = qtdRamos;
        } else {
            qtdRamosPodemSerPodados = 100 - percentualDesgastado;
        }
        int qtdRamosPodados = planta.serPodada(qtdRamosPodemSerPodados);
        percentualDesgastado += qtdRamosPodados;
        return qtdRamosPodados;
    }

    public void afiar(int qtdSegundos){
        if (qtdSegundos < 0) return;
        if(percentualDesgastado - qtdSegundos >= 0) {
            percentualDesgastado -= qtdSegundos;
        } else {
            percentualDesgastado = 0;
        }
    }
}
