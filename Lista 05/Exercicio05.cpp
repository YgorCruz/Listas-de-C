#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	
	int a[30],i,b[30];
	
	for(i=0;i<30;i++){
		
		a[i]=rand()%150+1;
		
		printf("\nA[%i] = %i",i,a[i]);
	}

	for(i=0;i<30;i++){
		if(a[i]%2!=0){
			b[i]=a[i]/2;
		}
		if(a[i]%2==0){
			b[i]=a[i]/3;
		}
	}
	printf("\n\nVetor B\n\n");
	for(i=0;i<30;i++){
		printf("\nB[%i] = %i",i,b[i]);
	}

}

