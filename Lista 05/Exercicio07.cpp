#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	
	int v[50],i,num,maior=0,media=0,cont=0;
	
	printf("Digite um número: ");
	scanf("%i",&num);
	
	for(i=0;i<50;i++){
		v[i]=rand()%100+1;
		
		printf("\nA[%i] = %i",i,v[i]);
		
		if(v[i]%2==0){
			if(v[i]>num){
				maior+=v[i];
				cont++;
			}
		}
	}
	media=maior/cont;
	
	printf("\nA media dos numeros pares maiores que X é : %i",media);
}

