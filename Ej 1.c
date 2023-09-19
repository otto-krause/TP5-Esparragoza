#include <stdio.h>

int main() {
	int resistencias[5]={10, 5, 50, 40, 15}, i, acu=0;
	for(i=0;i<5;i++){
		printf("%d \n", resistencias[i]);
		acu+=resistencias[i];
	}
	printf("la resistencia total es: %d \n", acu);
	
	return 0;
}

