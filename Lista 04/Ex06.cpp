#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	for( int c = 1; c <= 500; c++ ){
		if(c % 5 == 0){
			printf("%i\n",c);
		}
	}
}

