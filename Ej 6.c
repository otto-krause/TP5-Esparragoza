#include <stdio.h>

int main() {
	int sueldos[20], i, mayor=0, men=0;
	for(i=0;i<5;i++){
		printf("Ingrese el sueldo del empleado %d: ",i+1);
		scanf("%d", &sueldos[i]);
		if(sueldos[i]<2000){
			men++;
		}
		else{
			if(sueldos[i]>=2000){
				mayor++;
			}
		}
	}
	printf("La cantidad de empleados q ganan mas de 2000 es de: %d \n", mayor);
	printf("La cantidad de empleados q ganan menos de 2000 es de: %d \n", men);
	
	return 0;
}

