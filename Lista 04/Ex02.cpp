#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	for( int c = 200; c >= 100; c--){
		printf("%i\n",c);
	}
}

