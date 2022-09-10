package br.com.batista.main;

public class DemoApplication {
	
	public static void main(String[] args) {
		
		long tempoInicial = System.currentTimeMillis();
		
		String nome = "Gustavo";
		String matricula = "12345";
		String curso = "Sistemas de Informação";
		
		System.out.println("O Aluno " + nome + " de matrícula " + matricula + " está cursando " + curso);
		
		System.out.println("O método foi executado em " + (System.currentTimeMillis() - tempoInicial) + " milissegundos.");

	}

}
// Resultado de processamento obtido: O m�todo foi executado em 1 milissegundos.