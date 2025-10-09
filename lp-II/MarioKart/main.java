package MarioKart;

public class main {
	public static void main(String[]args) {
		Kart k1= new Kart(120f);
		Piloto p1= new Piloto("Mario",50);
		
		k1.exibirInfor();
		p1.exibirInfo();
		k1.acelerar(10);
		//k1.derrapar();
		//k1.efetuarCurva();
		k1.exibirInfor();
		
		p1.exibirInfo();
		p1.perderMoeda(4);
		p1.exibirInfo();
		p1.coletarMoedas(10);
		p1.exibirInfo();
		p1.fazerCurva(k1, 10);
		p1.exibirInfo();
		k1.exibirInfor();
		
	}

}
