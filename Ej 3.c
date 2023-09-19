#include <stdio.h>

int main() {
	int i, j=0, n1, n2, numeros[25];
	printf("Ingrese un numero: ");
	scanf("%d", &n1);
	printf("Ingrese otro numero: ");
	scanf("%d", &n2);
	if(n1<n2){
		for(i=n1+1;i<n2;i++){
			if(j==0){
				numeros[0]=i;
				printf("-%d \n", numeros[0]);
			}
			else{
				numeros[j++]=i;
				printf("-%d \n", numeros[j++]);
			}
		}
	}
	else{
		for(i=n2+1;i<n1;i++){
			if(j==0){
				numeros[0]=i;
				printf("-%d \n", numeros[0]);
			}
			else{
				numeros[j++]=i;
				printf("-%d \n", numeros[j++]);
			}
		}
	}
	
	return 0;
}

