#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	
	int cont,v[30],c=0,t=0;
	
	for(cont=1;cont<30;cont++){
		v[cont] = rand()%50;
		printf("\nV[%i] = %i",cont,v[cont]);
	}
	
	printf("\n\nVetor modificado\n\n");
	
	for(cont=0;cont<30;cont++){
		if(v[cont]%2==0){
			v[cont] = 0;
		}
		else{
			c++;
		}
		printf("\nV[%i] = %i",cont,v[cont]);
	}
	
	t=c*100/30;
	
	printf("\n\n\n%i%% dos valores é impares ",t);
}
