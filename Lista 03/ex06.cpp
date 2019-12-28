#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	int cont=1000;
    setlocale(LC_ALL,"Portuguese");
 	
 	while(cont<2000){
 		if(cont%11==5){
 			printf("%i\n",cont);
		 }
		 cont++;
	 }
	system("pause");
}

