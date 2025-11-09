package modelo;

public final class Moto extends Veiculo{
	private final String tipoPartida;

	public Moto(String placa, String marca, String modelo, int ano, int quilometragem, float valorBase,
			String tipoPartida) {
		super(placa, marca, modelo, ano, quilometragem, valorBase);
		this.tipoPartida = tipoPartida;
	}
	
	@Override
	public void exibirInformacoes() {
		super.exibirInformacoes();
		System.out.println("Tipo Partida: "+tipoPartida);
	
	}

	@Override
	public int prazoMaximoEmMeses() {
		super.prazoMaximoEmMeses();
		return 30;
	}
}
