#include <iostream>
using namespace std;

void TiempoEspera(int[], int[], int, int[], int, int[]);

int main()
{

	int procesos[] = {1, 2, 3};
	int tLlegada[] = {0, 0, 0};
	int rafagaCPU[] = {1, 2, 6};
	int quantum = 2;
	int n = sizeof procesos / sizeof procesos[0];

	int tEspera[n], tat_time[n], tRetorno[n], totalEspera = 0, totalRetorno = 0;
	TiempoEspera(procesos, tEspera, n, rafagaCPU, quantum, tLlegada);
	cout << "Tarea\t T. Llegada\t Rafaga CPU\tT. Espera\n";

	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << "\t\t" << tLlegada[i] << "\t\t" << rafagaCPU[i] << "\t\t" << tEspera[i] << endl;
	}
	return 0;
}

void TiempoEspera(int[], int tEspera[], int n, int rafagaCPU[], int quantum, int tLlegada[])
{
	int auxRafaga[n];
	for (int i = 0; i < n; i++)
		auxRafaga[i] = rafagaCPU[i];

	int t = 0, minTllegada = 0;

	while (true)
	{
		bool band = true;
		for (int i = 0; i < n; i++)
		{
			if (auxRafaga[i] > 0)
			{
				band = false;
				if ((auxRafaga[i] > quantum) && (tLlegada[i] <= minTllegada))
				{
					t += quantum;
					auxRafaga[i] -= quantum;
					minTllegada++;
				}
				else
				{
					if (tLlegada[i] <= minTllegada)
					{
						minTllegada++;
						t += auxRafaga[i];
						auxRafaga[i] = 0;
					}
				}
			}
		}

		if (band)
			break;
	}
}
