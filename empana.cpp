#include <iostream>
#include <cstdlib>

int main() {
	// 10000, 20000, 30000, 40000, 60000, 80000, 100000, 200000
	int qtde_numeros = 200000; 
	int* numeros = new int[qtde_numeros];

	for (int i = 0; i < qtde_numeros - 1; i++) {
		numeros[i] = rand();
//		std::cout << numeros[i] << "\n";
	}

	for (int i = 0; i < qtde_numeros - 1; ++i) {
		for (int j = i + 1; j < qtde_numeros; ++j){
			int primeiro_numero = numeros[i];
			int segundo_numero = numeros[j];
			if(segundo_numero < primeiro_numero){
				numeros[i] = segundo_numero;
				numeros[j] = primeiro_numero;
			}
		}
	}

	delete[] numeros;

	return 0;
}
