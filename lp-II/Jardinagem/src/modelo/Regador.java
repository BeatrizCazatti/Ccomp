package modelo;

public class Regador {
    private int volumeAtualMl;
    private int capacidadeMl;

    public Regador (int capacidade){
        this.volumeAtualMl = 0;
        this.capacidadeMl = capacidade;
    }

    
    public int getVolumeAtualMl() {
        return volumeAtualMl;
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
        if(volumeAtualMl + ml <= capacidadeMl){
            volumeAtualMl += ml;
        }else{
            volumeAtualMl = capacidadeMl;
        }
    }
}
