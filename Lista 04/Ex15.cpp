#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	int num;
	float h=0;
	setlocale(LC_ALL,"Portuguese");
	printf("Digite um n�mero : ");
	scanf("%i",&num);
	for(int cont = 1; cont <= num; cont ++){
		h+=(float)1/(cont);
	}
	printf("O valor de H � %.2f",h);
}

