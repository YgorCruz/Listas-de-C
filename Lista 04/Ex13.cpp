#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	int num,c=0;
	setlocale(LC_ALL,"Portuguese");
	printf("Digite um número : ");
	scanf("%i",&num);
	
	for(int cont = 1; cont <= num; cont ++){
		if (cont % 3 == 0){
			printf("O número %i é divisivel por 3\n",cont);
			c++;
		}
		if(cont % 5 == 0){
			printf("O número %i é divisivel por 5\n",cont);
			c++;
		}
	}
	if(c == 0){
	
	printf("Nenhum número é divisivel por 3 ou por 5 no intervalo de 1 a %i\n",num);
	
	}
}

