#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	
	int x[10],y[10],z[20],cont;
	
	for(cont=0;cont<10;cont++){
		x[cont]=rand()%50+1;
		y[cont]=rand()%50+1;
	}
	
	printf("\n\n---Vetor X\n");
	
	for(cont=0;cont<10;cont++){
		
		printf("\nX[%i] = %i",cont,x[cont]);
		
	}
	
	printf("\n\n---Vetor Y\n");
	
	for(cont=0;cont<10;cont++){
		
		printf("\nY[%i] = %i",cont,y[cont]);
		
	}
	
	printf("\n\n----Vetor Z----\n");
	
	for(cont=0;cont<20;cont++){
		if(cont<=9){
			z[cont]=x[cont];
		}
		else if(cont>9){
			z[cont]=y[cont-10];
		}
		printf("\nZ[%i] = %i",cont,z[cont]);
	}
}

