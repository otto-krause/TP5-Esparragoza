#include <stdio.h>

int main() {
	int notas[30], i, acu=0;
	float promedio;
	for(i=0;i<3;i++){
		printf("Ingrese nota del alumno %d: ", i+1);
		scanf("%d", &notas[i]);
		acu+=notas[i];
	}
	promedio=acu/3;
	printf("El promedio del curso es: %.2f", promedio);
	
	return 0;
}

