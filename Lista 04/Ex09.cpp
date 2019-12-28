#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	int t=0;
	
	setlocale(LC_ALL,"Portuguese");

	for( int c = 1; c <= 20; c++ ){
	
		t+=c;
		
	}

	printf("A soma dos numero é %i",t);
	
}

