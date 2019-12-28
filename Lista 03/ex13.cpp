#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	int a=1,b=1,c=1,qt=1;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("%i - %i",a,b);
	
		
	while(qt<=13){
	c=a+b;
	a=b;
	b=c;
	
	printf("%i,",c);
	c++;	
	}	
		
	
}

