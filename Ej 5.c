#include <stdio.h>

int main() {
	int unidades[15], acu=0, i, j, alt=0, alto=0, dia=0;
	float prome;
	for(i=0;i<20;i++){
		printf("Empleado %d: \n", i+1);
		for(j=0;j<15;j++){
			printf("Ingrese las unidades del dia %d: ", j+1);
			scanf("%d", &unidades[j]);
			while(unidades[j]<0){
				printf("Ingrese unidades correctas:");
				scanf("%d", &unidades[j]);
			}
			acu+=unidades[j];
			dia+=unidades[j];
		}
		prome=dia/15;
		if(prome>alt){
			alt=prome;
			alto=i+1;
		}
		dia=0;
	}
	printf("Cantidad de ventas totales: %d \n", acu);
	printf("Empleado con mas ventas al dia: %d \n", alto);
	
	
	return 0;
}

