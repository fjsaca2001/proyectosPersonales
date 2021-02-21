#include <iostream>
using namespace std;

void TiempoEspera(int[], int[], int, int[], int, int[], int[]);
void TiempoRetorno(int [], int [], int, int[], int[], int[], int[]);

int main(){

	int tLlegada[] = {0, 1, 3, 4};
	int procesos[] = {1, 2, 3, 4};
	int rafagaCPU[] = {4, 2, 2, 6};
	int quantum = 2;
	int n = sizeof procesos / sizeof procesos[0];
	
	int tEspera[n], tat_time[n], tRetorno[n], totalEspera = 0, totalRetorno = 0;
	TiempoEspera(procesos, tEspera, n, rafagaCPU, quantum, tRetorno, tLlegada);
	TiempoRetorno(procesos, tEspera, n, rafagaCPU, tat_time, tRetorno, tLlegada);
	cout << "Tarea\t T. Llegada\t Rafaga CPU\t T. Retorno\tT. Espera\n";

	for (int i = 0; i < n; i++)
	{
		totalEspera  += tEspera[i];
		totalRetorno += tat_time[i];
		cout << i + 1 << "\t\t" << tLlegada[i] << "\t\t" << rafagaCPU[i] << "\t\t"
			 << tRetorno[i] << "\t\t" << tEspera[i] << endl;
	}

	cout << "\nPromedio tiempo de espera: " << (float)totalEspera / (float)n;
	cout << "\nPromedio tiempo de retorno: " << (float)totalRetorno / (float)n;


	return 0;
}

void TiempoEspera(int[], int tEspera[], int n, int rafagaCPU[], int quantum, int tRetorno[], int tLlegada[])
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
						tRetorno[i] = t;
					}
				}
			}
		}

		if (band)
			break;
	}
}

void TiempoRetorno(int procesos[], int tEspera[], int n, int rafagaCPU[], int tat_time[], int tRetorno[], int tLlegada[])
{
	for (int i = 0; i < n; i++)
	{
		tat_time[i] = tRetorno[i] - tLlegada[i];
		tEspera[i] = tat_time[i] - rafagaCPU[i];
	}
}
