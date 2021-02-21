import java.util.Arrays;
import java.util.Scanner;

public class Fifo {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        // Solicitud de datos
        System.out.println("Algoritmo de planificación FIFO");
        int aux;
        System.out.println("Ingrese el total de tareas a realizar: ");
        int n = entrada.nextInt();
        int[] tiemposl = new int[n];
        int[] rafagas = new int[n];
        int[] procesos = new int[n];
        for (int i = 0; i < n; i++) {
            System.out.println("Ingrese el tiempo de llegada de la tarea #"+(i+1));
            tiemposl[i] = entrada.nextInt();
            System.out.println("Ingrese la rafagaCpu de la tarea #"+(i+1));
            rafagas[i] = entrada.nextInt();
            procesos[i] = i + 1;
        }

        // Ordeno los tiempos de llegada de cada tarea
        for (int j = 1; j < tiemposl.length; j++) {
            for (int i = 0; i < tiemposl.length-1; i++) {
                // Si el primer tiempo es mayor o igual al segundo y si la rafaga es mayor que la otra
                if(tiemposl[i]>tiemposl[i+1]){
                    // Guardamos en aux
                    aux = tiemposl[i];
                    // alternamos los valores
                    tiemposl[i] = tiemposl[i+1];
                    tiemposl[i+1]= aux;
                    // Guardamos el tiempo de rafaga
                    aux = rafagas[i];
                    // Alternamos los valores
                    rafagas[i] = rafagas[i+1];
                    rafagas[i+1]= aux;
                    aux = procesos[i];
                    // Alternamos los valores
                    procesos[i] = procesos[i+1];
                    procesos[i+1]= aux;
                }
            }
        }

        // Calculo del diagrama con las rafagas
        int [] rafagasD = new int[rafagas.length+1];
        int[] tiempoEspera = new int[tiemposl.length];
        int[] tiempoRetorno = new int[tiemposl.length];
        rafagasD[0] = 0;
        System.out.print("Diagrama \n");
        for (int i = 1; i < rafagas.length + 1; i++) {
            for (int j = 0; j < i; j++) {
                rafagasD[i] += rafagas[j];
            }
            System.out.printf("P%d\t",procesos[i-1]);
        }
        System.out.println("");
        for (int i = 0; i < rafagas.length; i++) {
            tiempoEspera[i] = rafagasD[i] - tiemposl[i];
            tiempoRetorno[i] = rafagasD[i+1] - tiemposl[i];
            System.out.print(rafagasD[i] + "\t");
        }

        // Presentacion de como pasaran las tareas
        for (int i = 0; i < tiemposl.length; i++) {
            System.out.printf("\nProceso #%d\tRafaga: %d\tT. Llegada: %d\tT. Espera: %d\tT. Retorno: %d"
                    ,procesos[i],rafagas[i],tiemposl[i],tiempoEspera[i],tiempoRetorno[i]);
        }
        System.out.printf("\nPromedio de tiempo de espera: %.2f\tPromedio de tiempo de retorno: %.2f",
                Arrays.stream(tiempoEspera).average().getAsDouble(),Arrays.stream(tiempoRetorno).average().getAsDouble());
    }
}
