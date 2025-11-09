package modelo;

import java.time.LocalDate;

public abstract class Veiculo {
	protected String placa, marca, modelo;
	protected int ano, quilometragem;
	protected float valorBase;
	
	public Veiculo(String placa, String marca, String modelo, int ano, int quilometragem, float valorBase) {
		if(placa == null || marca == null || modelo == null || ano == 0 || quilometragem == 0 || valorBase == 0) return;
		this.placa = placa;
		this.marca = marca;
		this.modelo = modelo;
		this.ano = ano;
		this.quilometragem = quilometragem;
		this.valorBase = valorBase;
	}
	
	public void exibirInformacoes() {
		System.out.println("Placa: " + placa);
		System.out.println("Marca: " + marca);
		System.out.println("Modelo: " + modelo);
		System.out.println("Ano: " + ano);
		System.out.println("Quilometragem: " + quilometragem);
		System.out.println("valorBase: " + valorBase);
	}
	
	public final void realizarRevisao(int novoKm) {
		if (novoKm > quilometragem) {
			quilometragem = novoKm;
		}
	}
	
	private int idade() {
		return LocalDate.now().getYear() - ano;
	}
	
	private float mediaKmAno() {
		return quilometragem / idade();
	}
	
	//public abstract void metodo();
	
	public float calcularValorFinal() {
		float porcentagem = 0.01f;
		
		if (mediaKmAno() < 15) {
			porcentagem = 0.005f;
		}
			
		float valorVenda = valorBase - (porcentagem * valorBase * idade());
		
		return valorVenda;
	}

	public float entradaMinima (){
        return valorBase * 0.1f;
    }

	public float gerarPrecoParaAnuncio() {
		return valorBase * 0.9f;
	}

	public int prazoMaximoEmMeses() {
		return 60;
	}

	public float simularParcelas (float entrada, int meses, float taxaAnual) {
		float fator = (float)Math.pow(1 + taxaAnual, meses);
		return entrada * (taxaAnual * fator) / (fator - 1);
	}

	public String gerarTituloAnuncio() {
		return "Titulo do Anuncio";
	}

	public String gerarDescricaoAnuncio() {
		return "Descrição do Anuncio";
	}
}
