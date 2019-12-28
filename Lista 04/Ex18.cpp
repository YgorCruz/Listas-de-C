#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	int n1,n2;
	setlocale(LC_ALL,"Portuguese");
	printf("Digite número par : ");
	scanf("%i",&n1);
	printf("Digite outro número par : ");
	scanf("%i",&n2);
	for(int c = n1; c <= n2;c++ ){
		printf("%i\n",c);
	}
}

