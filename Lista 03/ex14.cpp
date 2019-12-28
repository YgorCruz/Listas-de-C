#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	int x=1 , c ,sd;
	//sd - soma dos divisores
	setlocale(LC_ALL,"Portuguese");
	
	while(x<=800){
		c=1;
		sd=0;
		while(c<x){
			if(x%c==0){
				sd+=c;
			}
			c++;
		}
		if(sd==x){
			printf("Números perfeitos : %i\n",x);
		}
		x++;
	}
}

