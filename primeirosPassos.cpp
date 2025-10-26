// primeirosPassos.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

int main()
{
	double distancia, tempo;

	std::cout << "=== Calculo de velocidade ====\n";

	//entrada de dados

	std::cout << "Digite a distancia percorrida (em metros): ";

	std::cin >> distancia;

	std::cout << "Digite o tempo gasto (em segundos): ";

	std::cin >> tempo;

	//processamento 

	double velocidade_ms = distancia / tempo;
	double velocidade_kmh = velocidade_ms * 3.6;

	std::cout << "Resultados:";
	std::cout << "velocidade media: " << velocidade_ms << " m/s \n";
	std::cout << "velocidade media: " << velocidade_kmh << "km/h\n";

	return 0;

}
