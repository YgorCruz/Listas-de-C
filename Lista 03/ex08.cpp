#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	int maior,menor,media=0,cont=1,num;
    setlocale(LC_ALL,"Portuguese");
    
 	while(cont<=5){
		 
 		printf("Digite um numero: ");
 		scanf("%i",&num);
 		
 		if(cont==1){
 			maior=num;
 			menor=num;
		 }
 		
 		cont++;
 		
 		
 		if(num>maior){
 			maior=num;
		 }
		 
		 if(num<menor){
		 	menor=num;
		 }
		 
		 media+=num;
	 }
	 
	 printf("O maior n�mero digitado foi : %i\n",maior);
	 printf("O menor n�mero digitado foi : %i\n",menor);
 	 printf("A m�dia dos n�meros digitados � : %.0f\n",(float)media/cont);
	
	system("pause");
}

