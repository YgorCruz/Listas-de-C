#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));

	int i=0,a[50],maior,menor;
	
	for(i=0;i<50;i++){
		
		a[i] = rand()%200;
		
		if(i==0){
			maior = a[i];
			menor = a[i];
		}
		
		printf("\nA[%i] = %i",i,a[i]);
		
	} 
		
	for(i=0;i<50;i++){
		if(a[i]>maior){
			maior=a[i];
		}
		if(a[i]<menor){
			menor=a[i];
		}
	}
			printf("\n\nmaior = %i",maior);
			printf("\nmenor = %i",menor);
}
