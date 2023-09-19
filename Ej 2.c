#include <stdio.h>

int main() {
	int numeros[5], i, mayor, acu;
	float promedio;
	for(i=0;i<5;i++){
		printf("Ingrese un numero: ");
		scanf("%d", &numeros[i]);
		acu+=numeros[i];
		if(i==0){
			mayor=numeros[i];
		}
		else{
			if(numeros[i]>=mayor){
				mayor=numeros[i];
			}
		}
	}
	promedio=acu/5;
	printf("El Promedio de los numeros ingresados es: %.2f \n", promedio);
	printf("El Mayor de los numeros ingresados es: %d \n", mayor);
	
	return 0;
}

