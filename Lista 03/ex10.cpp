#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	int c=1,n,t;
    setlocale(LC_ALL,"Portuguese");
    
	printf("Digite um numero para ser fatorado: ");
	scanf("%i",&n);

	while(c<n){
		
	if(c==1){
		
		t=n;
		
	}
	
	t=t*(n-c);
	
	c++;
	}
	
	printf("%i\n",t);
	
	system("pause");
}
