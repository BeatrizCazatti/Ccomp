package modelo;

public class Regador {
    private int volumeAtualMl;
    private int capacidadeMl;

    public Regador (int capacidade){
        this.volumeAtualMl = 0;
        this.capacidadeMl = capacidade;
    }

    public boolean regar(int mlSolicitados, Planta planta){
        if(volumeAtualMl - mlSolicitados > 0 && planta.sede() > 0){
            volumeAtualMl -= mlSolicitados;
            planta.absorverAgua(mlSolicitados);
            return true;
        }else{
            volumeAtualMl = 0;
            return false;
        }
    }

    public void encher(int ml){
        if(ml <= capacidadeMl - volumeAtualMl){
            volumeAtualMl += ml;
        }else{
            volumeAtualMl += capacidadeMl - volumeAtualMl;
        }
    }
}
