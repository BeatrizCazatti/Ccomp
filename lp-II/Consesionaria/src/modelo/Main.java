package modelo;

public class Main {
	
	public static void main(String[] args) {
		
		Carro cr = new Carro("KNX-3428", "Ford", "Ford Focus", 2015, 8560, 49610, 4, "Sedã", 3);
		Caminhao cm = new Caminhao("JRT-4983", "Volkswagen" , "VW Delivery", 2012, 126385, 158518, 2, 1335);
		
		cr.exibirInformacoes();
		
		cm.exibirInformacoes();
		
	}
	


}
