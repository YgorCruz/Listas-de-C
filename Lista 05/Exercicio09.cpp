#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	
	int i,j,a[20],v[20];
	
	for(i=0;i<20;i++){
		v[i]=rand()%100;
		printf("\nV[%i] = %i",i,v[i]);
	}
	
	printf("\n\nVetor organizado\n\n");
	
	for(i=0;i<20;i++){
		a[i] = v[10-i];
		
		if(i>=10){
			for(j=10;j<=19;j++){
  			    a[j] = v[i-10];
			}
		}
		
		printf("\nA[%i] = %i",i,a[i]);
	}
	
}

