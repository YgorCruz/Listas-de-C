#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	int num,c=0;
	
	setlocale(LC_ALL,"Portuguese");
	
	for(int cont = 1; cont <= 10; cont ++){
		printf("\nDigite um número : ");
		scanf("%i",&num);
		
		if(num>30){
			printf("\nO número %i é maior que 30\n",num);
			c++;
		}
	}
	if(c==1){
	printf("\n%i número digitado é maior que 30\n",c);	
	}
	if(c>1){
	printf("\n%i dos números digitados é maior que 30\n",c);	
	}
	else{
	printf("\nNenhum número digitado é maior que 30\n");
	}
}

