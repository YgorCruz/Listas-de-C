#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	char opc,nome;
	float largura,comprimento,area,at=0;
	
    setlocale(LC_ALL,"Portuguese");
 
 do{
		printf("Digite o nome do c�modo: ");
		scanf("%s",&nome);
		 
		printf("Digite a largura do c�modo: ");
		scanf("%f",&largura);
		 
		printf("Digite o comprimento do c�modo: ");
		scanf("%f",&comprimento);
		 
		 
		area=largura*comprimento;
		at+=area;
		printf("A �rea do c�modo digitado � de: %.2f\n",area);
	 
	
		printf("Deseja continuar(s/n) ?");
		scanf(" %c",&opc);
 		
	}while( opc!='n' && opc!='N' );
	 
	 printf("A �rea total dos c�modos digitados � de: %.2f\n",at);
	 
	system("pause");
}
