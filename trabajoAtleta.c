/*
Un atleta ha completado un triatlón compuesto por natación, ciclismo y carrera.
El tiempo de cada actividad es ingresado por el usuario en minutos. 
El sistema debe determinar el nivel del atleta según las siguientes reglas:
Tiempo total menor o igual a 100 minutos: Nivel Excelente
Tiempo total entre 101 y 140 minutos: Nivel Bueno
Tiempo total entre 141 y 180 minutos: Nivel Regular
Tiempo total mayor a 180 minutos: Fuera de tiempo
*/
#include <stdio.h>

int main() {
    float TiempoNatacion = 0;
    float TiempoCiclismo = 0;
    float TiempoCarrera = 0;
    float TiempoTotal = 0;

    printf("Ingrese el tiempo obtenido en natacion (minutos): ");
    scanf("%f", &TiempoNatacion);
    printf("Ingrese el tiempo obtenido en ciclismo (minutos): ");
    scanf("%f", &TiempoCiclismo);
    printf("Ingrese el tiempo obtenido en carrera (minutos): ");
    scanf("%f", &TiempoCarrera);

    TiempoTotal = TiempoNatacion + TiempoCiclismo + TiempoCarrera;

    printf("Tiempo Total: %.2f minutos\n", TiempoTotal); 

    if (TiempoTotal <= 100) {
        printf("Nivel Excelente\n");
    } 
    else if (TiempoTotal > 100 && TiempoTotal <= 140) {
        printf("Nivel Bueno\n");
    } 
    else if (TiempoTotal > 140 && TiempoTotal <= 180) {
        printf("Nivel Regular\n");
    } 
    else {
        printf("Fuera de tiempo\n");
    }

    return 0;
}
