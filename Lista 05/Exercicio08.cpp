#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	
	int a[20],b[20],i,j;
	
	for(i=0;i<20;i++){
		a[i]=rand()%100;
		printf("\nA[%i] = %i",i,a[i]);
	}
	
	printf("\n\nInverso\n\n");
		
	
	for(i=0;i<20;i++){
		b[i]=a[19-i];
		printf("\nB[%i] = %i",i,b[i]);
	}
	
	
}

