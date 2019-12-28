#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	int q,n,c,f;
	//q = quantidade de numeros a ser lido
	//f = calculo fatorial
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite um número : ");
	scanf("%i",&q);
	
	while(q>=1){
	
	printf("\nNúmero: ");
	scanf("%i",&n);
		
	c=1;
	f=1;
	while(c<=n){
	f*=c;
	c++;	
	}
	printf("\nfatorial de %i = %i\n",n,f);
		
		q--;
	}
}


