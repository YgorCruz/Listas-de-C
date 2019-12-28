#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	
	float c=1,v,q;
	
	while(c<6){
		printf("Digite um valor: ");
		scanf("%f",&v);
		if(v<0){
			printf("O numero %.0f é negativo\n",v);
		q++;	
		}
		c++;
	}
	if(q>1){	
	printf("%.0f dos numeros digitados são negativos\n",q);
	}
	else if(q==0){
		printf("nenhum numero é negativo\n");
	}
	else{
		printf("Apenas %.0f é negativo\n",q);
	}
	system("pause");
}

