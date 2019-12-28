#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	int a[10],i;
	
	srand(time(NULL));
	
	for(i=0;i<10;i++){
		a[i] = rand()%100;
		if(a[i]>15 && a[i]<45){
			printf("\nA[%i] = %i",i,a[i]);
		}
	}
}

