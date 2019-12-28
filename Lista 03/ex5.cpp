#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	int c,n,cont=0,m=0;
	
    setlocale(LC_ALL,"Portuguese");
    
    printf("Digite um numero para tabuada: ");
    scanf("%i",&n);
    
 	while(cont<11){
 		m=n*cont;
 		printf("%i x %i = %i\n",n,cont,m);
 		cont++;
	 }
	system("pause");
}

