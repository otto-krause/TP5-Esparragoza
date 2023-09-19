#include <stdio.h>

int main() {
	int i=0, num[10], suma=0, producto=1, j, Menor=0;
	float promedio;
	printf("Ingrese 10 elementos: \n");
	while(i<10){
		scanf("%d", &num[i]);
		suma=suma+num[i];
		producto=producto*num[i];
		i++;
	}
	promedio=suma/10;
	for(j=0;j<10;j++){
		if(num[j]<promedio){
			Menor++;
		}
	}
	printf("La suma de los elementos del vector es: %d \n", suma);
	printf("El producto de los elementos del vector es: %d \n", producto);
	printf("El promedio de los elementos del vector es: %.2f \n", promedio);
	printf("La cantidad de numeros que son menores al promedio es de: %d \n", Menor);
	
	return 0;
}
