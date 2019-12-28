#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	for( int c = 1; c <= 20; c++ ){
		
		printf("%i\n",c*c);
		
	}
}

