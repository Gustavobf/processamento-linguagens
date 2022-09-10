package br.com.batista.main;

public class DemoApplication2 {

	public static void main(String[] args) {

		long tempoInicial = System.currentTimeMillis();

		for (int i = 1; i <= 1000; i++) {
			System.out.println(i);
		}

		System.out.println("O método foi executado em " + (System.currentTimeMillis() - tempoInicial) + " milissegundos.");

	}

}
