package MarioKart;

public class Kart {
	private float velocidadeAtual;
	private float velocidadeMax;
	private float desgastePneu;
	public Kart(float velocidadeMax) {

		this.velocidadeAtual =0;
		if(velocidadeMax>0) {
			this.velocidadeMax = velocidadeMax;
		}
		this.desgastePneu = 0;
	}

	public void acelerar(int segundos) {
		if(segundos > 0) {
				if(this.velocidadeAtual + 10*segundos<=velocidadeMax) {
					this.velocidadeAtual += 10*segundos;
					  
				}else {
					this.velocidadeAtual = velocidadeMax;
				}
				if(this.desgastePneu + segundos/3 < 100) {
					this.desgastePneu += segundos/3;
				}else {
					this.desgastePneu = 100;
				}

		}
	}
	
	public void frear(int segundos) {
		if(segundos > 0) {
			if(this.velocidadeAtual -(10*segundos) > 0) {
				this.velocidadeAtual = this.velocidadeAtual - (10*segundos);	
			}else {
				this.velocidadeAtual = 0;
			}
			
		}
	}
	
	
	public void derrapar() {
		frear(5);
		if (desgastePneu + 12.5f < 100) {
			this.desgastePneu += 12.5f;
			}
		else {
			this.desgastePneu = 100;
		}
	}
	
	
	public void efetuarCurva() {
		frear(2);
		acelerar(3);
	}
	public void exibirInfor() {
		System.out.printf("Velocidae atual %.2f desgaste %.2f\n",velocidadeAtual, desgastePneu);
	}
}
