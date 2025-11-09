package modelo;

public final class Caminhao extends Veiculo{
	private final int numeroEixos;
	private final int capacidadeCarga;
	
	
	public Caminhao(String placa, String marca, String modelo, int ano, int quilometragem, float valorBase,
			int numeroEixos, int capacidadeCarga) {
		super(placa, marca, modelo, ano, quilometragem, valorBase);
		this.numeroEixos = numeroEixos;
		this.capacidadeCarga = capacidadeCarga;
	}
	
	@Override
	public void exibirInformacoes() {
		super.exibirInformacoes(); //Sobrescreva o método exibirInformacoes para adicionar às informações bases do Veículo as específicas da classe concreta.
		System.out.println("Numero Eixos: " + numeroEixos);
		System.out.println("Capacidade de Carga: " + capacidadeCarga);		
	}
	
	@Override
	public int prazoMaximoEmMeses() {
		return 120;
	}

	@Override
	public float entradaMinima() {
		return valorBase * 0.3f;
	}
}
