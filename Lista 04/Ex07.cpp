#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	int n;
	setlocale(LC_ALL,"Portuguese");
	
	for( int c = 1; c <= 10; c++ ){
		
		printf("\nDigite um n�mero : ");
		scanf("%i",&n);
		
		printf("%i ao quadrado � %i\n",n,n*n);
	}
}

