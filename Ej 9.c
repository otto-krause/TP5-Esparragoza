#include <stdio.h>

int main() {
	int i, j=0, num[100], Ascendente=0, Descendente=0, Suma=0;
	printf("Ingrese una lista de numeros: ");
	while(num[j-1]!=0){
		scanf("%d", &num[j]);
		j++;
	}
	for(i=0;i<=j;i++){
		if(num[i]>num[i-1]){
			Ascendente++;
		}
		else{
			if(num[i]<num[i-1]){
				Descendente++;
			}
		}
	}
	if(Ascendente>0 && Descendente==0){
		printf("La Lista es Ascendente \n");
	}
	else{
		if(Ascendente==0 && Descendente>0){
			printf("La lista es Descendente \n");
		}
		else{
			if(Ascendente>0 && Descendente>0){
				printf("la lista esta Desordenada \n");
			}
		}
	}
	Suma=num[0]+num[j-2];
	printf("La suma del primer y ultimo numero es: %d", Suma);
	
	return 0;
}

