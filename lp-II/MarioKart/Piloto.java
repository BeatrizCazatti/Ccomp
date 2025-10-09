package MarioKart;

public class Piloto {
	private String nome;
	private int moedas;
	private int habilidadeDirecao;
	

	public Piloto(String nome, int habilidadeDirecao) {
		if(nome!="" ) {
			this.nome = nome;
		}
		this.moedas = 0;
		if (habilidadeDirecao<=100 && habilidadeDirecao>=0) {
			this.habilidadeDirecao = habilidadeDirecao;
		}
	}
	
	public void coletarMoedas(int qnt) {
		moedas+= qnt;
	}
	
	public void perderMoeda(int qnt) {
		if(moedas - qnt > 0) {
			moedas -= qnt;
		}else {
			moedas = 0;
		}
	}
	public void fazerCurva(Kart kart, int grauCurva) {
		if (grauCurva > this.habilidadeDirecao) {
			kart.derrapar();
			perderMoeda(grauCurva-habilidadeDirecao);
			kart.derrapar();
		}else {
			kart.efetuarCurva();
		}
		
	}
	public void exibirInfo() {
		System.out.printf("Nome %s Habilidade de Direção %d Moedas %d\n", nome, habilidadeDirecao, moedas);
	}
	

}
