#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	char opc,nome;
	float largura,comprimento,area,at=0;
	
    setlocale(LC_ALL,"Portuguese");
 
 do{
		printf("Digite o nome do cômodo: ");
		scanf("%s",&nome);
		 
		printf("Digite a largura do cômodo: ");
		scanf("%f",&largura);
		 
		printf("Digite o comprimento do cômodo: ");
		scanf("%f",&comprimento);
		 
		 
		area=largura*comprimento;
		at+=area;
		printf("A área do cômodo digitado é de: %.2f\n",area);
	 
	
		printf("Deseja continuar(s/n) ?");
		scanf(" %c",&opc);
 		
	}while( opc!='n' && opc!='N' );
	 
	 printf("A área total dos cômodos digitados é de: %.2f\n",at);
	 
	system("pause");
}
