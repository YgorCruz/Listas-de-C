#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	
	int a[30],i,x,maior=0;
	
	for(i=0;i<30;i++){
		
		a[i]=rand()%150+1;
		printf("\nA[%i] = %i",i,a[i]);

	}

	printf("\n\nDigite um n�mero : ");
	scanf("%i",&x);

	for(i=0;i<30;i++){

	if(a[i]%2!=0){
			if(a[i]>x){
				maior++;
			}
		}
	}
	if(maior==1){	
	printf("Apenas %i elemento do vetor � maior que X",maior);
	}
	else{
	printf("%i elementos do vetor s�o maior que X",maior);
	}
}
