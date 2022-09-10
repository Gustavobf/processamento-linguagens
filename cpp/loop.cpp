#include <iostream>
#include <string>
#include <time.h>

using namespace std;

int main()
{

    setlocale(LC_ALL, "portuguese");

    clock_t tempoInicial, tempoFinal;
    double tempo_gasto;

    tempoInicial = clock();

    for (int i = 1; i <= 1000; i++)
    {
        cout << i << endl;
    }

    tempoFinal = clock();
    tempo_gasto = ((tempoFinal - tempoInicial) / (CLOCKS_PER_SEC / 1000));

    cout << "Tempo de execução: " << tempo_gasto << " milissegundos" << endl;

    system("pause");
    return 0;
}
