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
			printf("O numero %.0f � negativo\n",v);
		q++;	
		}
		c++;
	}
	if(q>1){	
	printf("%.0f dos numeros digitados s�o negativos\n",q);
	}
	else if(q==0){
		printf("nenhum numero � negativo\n");
	}
	else{
		printf("Apenas %.0f � negativo\n",q);
	}
	system("pause");
}

