#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	int maior,menor,num;
	setlocale(LC_ALL,"Portuguese");
	
	for(int cont = 1; cont <= 10; cont ++){
		printf("Digite um n�mero : ");
		scanf("%i",&num);
		
		if(cont == 1){
			maior=num;
			menor=num;
		}
		else{
			if(num>maior){
			maior=num;	
			}
			else if(num<menor){
				menor=num;
			}
		}
	}
	
	printf("O maior n�mero digitado foi : %i\n",maior);
	printf("O menor n�mero digitado foi : %i\n",menor);
}

