#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	int num,c=0;
	
	setlocale(LC_ALL,"Portuguese");
	
	for(int cont = 1; cont <= 10; cont ++){
		printf("\nDigite um n�mero : ");
		scanf("%i",&num);
		
		if(num>30){
			printf("\nO n�mero %i � maior que 30\n",num);
			c++;
		}
	}
	if(c==1){
	printf("\n%i n�mero digitado � maior que 30\n",c);	
	}
	if(c>1){
	printf("\n%i dos n�meros digitados � maior que 30\n",c);	
	}
	else{
	printf("\nNenhum n�mero digitado � maior que 30\n");
	}
}

