#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	int a[10],i;
	
	srand(time(NULL));
	
	for(i=0;i<10;i++){
		a[i]= rand()%100;
		
		printf("\nA[%i] = %i",i,a[i]);
		
	}
	printf("\n\nVetor Modificado\n\n");
	for(i=0;i<10;i++){
		
		if(a[i]<30){
			a[i]=1;
		}
		
		printf("\nA[%i] = %i",i,a[i]);
	}
}

