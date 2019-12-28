#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	
	int v[20],cont,num,maior=0;
	
	for(cont=0;cont<20;cont++){
		v[cont]=rand()%100+100;
		printf("\nV[%i] = %i",cont,v[cont]);
	}
	
	printf("\nDigite um número: ");
	scanf("%i",&num);
	
	
	printf("\n----Vetor Modificado----\n");
	for(cont=0;cont<20;cont++){
		if(num<v[cont]){
			maior++;
		}
		else{
			v[cont]=0;
		}
		
		printf("\nV[%i] = %i",cont,v[cont]);
	}
	
	printf("\nMaiores que %i : %i",num,maior);
}

