#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
		
	float t=0 ,f;
	
	setlocale(LC_ALL,"Portuguese");
	
	for( int c = 1; c <= 20; c++ ){
		f=c;
		
		printf("A metade de %i é %.2f\n",c,c/2.0);
		
		t+=(float)c/2;
	}

	printf("A soma da metade dos numeros ate 20 é : %.2f",t);

}
