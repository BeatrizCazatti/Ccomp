package modelo;

public class Catraca {
    private String id;
    private boolean statusBloqueio;
    private int qtdPassagens;
    private float totalPassagens;
    private String ultimoHorario;

    public Catraca (String id){
        this.id = id;
        this.statusBloqueio = false;
        this.qtdPassagens = 0;
        this.totalPassagens = 0;
        this.ultimoHorario = "";
    }

    public String getId() {
        return this.id;
    }

    public boolean getStatusBloqueio() {
        return this.statusBloqueio;
    }

    public int getQtdPassagens() {
        return this.qtdPassagens;
    }

    public float getTotalPassagens() {
        return this.totalPassagens;
    }

    public String getUltimoHorario() {
        return this.ultimoHorario;
    }

    public void desbloquear(){
        this.statusBloqueio = false;
    }

    public void bloquear(){
        this.statusBloqueio = true;
    }

    public void exibirStatus() {
        System.out.println(id);
        System.out.println(statusBloqueio);
        System.out.println(qtdPassagens);
        System.out.println(totalPassagens);
        System.out.println(ultimoHorario == "" ? "Nenhum" : ultimoHorario);
    }
    public void registrarPassagem(String horario, float valorPago, Cartao cartao){
        if(cartao.getSaldo() >= valorPago){
            desbloquear();
            cartao.debitaValor(valorPago);
            this.qtdPassagens++;
            this.totalPassagens += valorPago;
            this.ultimoHorario = horario;
            bloquear();
        }
    }
}

