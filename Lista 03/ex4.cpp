#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	int c=0,n;
    setlocale(LC_ALL,"Portuguese");
 	do{
 		printf("Digite um numero: ");
 		scanf("%i",&n);
 		if(n%2!=0){
 			c+=n;
 		}
	}while(n!=0);
 	printf("A somatória dos números negativos é: %i\n",c);
	system("pause");
}
