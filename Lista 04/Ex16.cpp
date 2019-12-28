#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	float num,t=0,pp=0,pn=0;
	int p=0,n=0;
	setlocale(LC_ALL,"Portuguese");
	
	for(int c = 1; c <= 20; c++){
		printf("Digite um número : ");
		scanf("%f",&num);
		
		t+=num;
		
		if(num<0){
			n++;
		}
		else if(num>0){
			p++;
		}	
	}
	pp=p*100/20;
	pn=n*100/20;
	
	
	t=t/20;
	printf("Números positivos : %i\n",p);
	printf("Porcentagem de números Positivos : %.0f\n",pp);
	printf("Números negativos : %i\n",n);
	printf("Porcentagem de números negativos : %.0f\n",pn);
	printf("Média aritmética é : %.2f",t);
}

