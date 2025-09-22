package modelo;

public class Planta {
    private int percentualUmidade = 0;
    private int tamanhoCm;
    private int qtdRamos;

    public Planta(int percentualUmidadede, int qtdRamos) {
        this.percentualUmidade = percentualUmidadede;
        this.qtdRamos = qtdRamos;
        this.tamanhoCm = qtdRamos*2;
    }

    public int absorverAgua(int ml){
        int podeAbsorver = 100 - percentualUmidade;
        if(this.percentualUmidade + ml <= 100){
            percentualUmidade += ml;
            return ml;
        }else{
            return podeAbsorver;
        }
    }

    public int serPodada(int qtdRamos) {
        int podePodar = tamanhoCm - (int)(qtdRamos * 0.5);
        if(podePodar >= 0){
            this.tamanhoCm -= qtdRamos;
            return qtdRamos;
        }else{
            this.tamanhoCm = 0;
        }
        return podePodar;
    }

    public int sede(){
        return 100 - this.percentualUmidade;
    }
}
