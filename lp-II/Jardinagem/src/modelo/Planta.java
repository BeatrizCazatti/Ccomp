package modelo;

public class Planta {
    private int percentualUmidade = 0;
    private float tamanhoCm;
    private int qtdRamos;

    public Planta(int percentualUmidadede, int qtdRamos) {
        this.percentualUmidade = percentualUmidadede;
        this.qtdRamos = qtdRamos;
        this.tamanhoCm = qtdRamos*0.5f;
    }

    public int absorverAgua(int ml){
        if(ml < 0) return 0;
        int qtdAbsorvida = 0;
        if(this.percentualUmidade + ml <= 100)qtdAbsorvida = ml;
        else qtdAbsorvida = 100 - percentualUmidade;
        percentualUmidade += qtdAbsorvida;
        return qtdAbsorvida;
    }

    public int serPodada(int ramos) {
        int qtdRamosPodados = 0;
        if(tamanhoCm - ramos * 0.5f >= 0) qtdRamosPodados = ramos;
        else qtdRamosPodados = this.qtdRamos;
        this.tamanhoCm -= qtdRamosPodados * 0.5f;
        return qtdRamosPodados;
    }

    public int sede(){
        return 100 - this.percentualUmidade;
    }
}
