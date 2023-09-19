#include <stdio.h>

int main() {
	int i, a=0, b=1, Fibo[500], n, f;
	printf("Ingrese un numero: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		if(i==1){
			Fibo[i-1]=b;
		}
		else{
			f=a+b;
			a=b;
			b=f;
			Fibo[i-1]=b;
		}
	}
	for(i=0;i<=n;i++){
		printf("%d\n", Fibo[i]);
	}
	
	return 0;
}

