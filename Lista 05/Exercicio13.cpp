#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	
	srand(time(NULL));
	
	int x[10],y[10],z[10],num=0,cont,c;
	
	for(cont=0;cont<10;cont++){
		x[cont]=rand()%50+1;
		y[cont]=rand()%50+1;
	}
	for(cont=0;cont<10;cont++){
		for(c=0;c<10;c++){
			if(x[cont]==y[c])
		 	    num++;
		}
	}
	for(cont=0;cont<10;cont++){
		for(c=0;c<10;c++){
			if(x[cont]==y[c])
		 	    z[cont]=x[cont];
		}
		printf("\nZ[%i] = %i",cont,z[cont]);
	}
}

