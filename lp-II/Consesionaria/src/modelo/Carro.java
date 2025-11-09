package modelo;

public final class Carro extends Veiculo{
	private final int numeroPortas;
	private final String tipoCarroceria;
	private final int capacidadeBagagem;
	
	
	public Carro(String placa, String marca, String modelo, int ano, int quilometragem, float valorBase,
			int numeroPortas, String tipoCarroceria, int capacidadeBagagem) {
		super(placa, marca, modelo, ano, quilometragem, valorBase);
		this.numeroPortas = numeroPortas;
		this.tipoCarroceria = tipoCarroceria;
		this.capacidadeBagagem = capacidadeBagagem;
	}
	
	@Override
	public void exibirInformacoes() {
		super.exibirInformacoes();
		System.out.println("Num de Portas: " + numeroPortas);
		System.out.println("Tipo de Carroceir: " + tipoCarroceria);
		System.out.println("Num de Portas: " + capacidadeBagagem);
	}

	@Override
	public float entradaMinima() {
		return valorBase * 0.2f;
	}

}
