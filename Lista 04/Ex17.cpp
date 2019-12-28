#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	
	float n1,n2,n3,m;
	
	setlocale(LC_ALL,"Portuguese");
	
	for(int c = 1; c <= 50; c ++){
		
		printf("Digite a primeira nota : ");
		scanf("%f",&n1);
		printf("Digite a segunda nota : ");
		scanf("%f",&n2);
		printf("Digite a terceira nota : ");
		scanf("%f",&n3);
		
		m=(n1+n2+n3)/3;
		
		printf("A média do aluno %i° é de : %.2f\n",c,m);
	}
	
}

