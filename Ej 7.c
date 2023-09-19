#include <stdio.h>

int main() {
	int notas[30], i;
	for(i=0;i<15;i++){
		printf("Ingrese nota del alumno %d: ", i+1);
		scanf("%d", &notas[i]);
		while((notas[i]<0) && (notas[i]>10)){
			printf("Ingrese nota valida para el alumno %d: ", i+1);
			scanf("%d", &notas[i]);
		}
		if(notas[i]>=8){
			printf("%d \n", i);
		}
	}
	
	return 0;
}

