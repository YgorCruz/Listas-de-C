#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	float num,t=0,pp=0,pn=0;
	int p=0,n=0;
	setlocale(LC_ALL,"Portuguese");
	
	for(int c = 1; c <= 20; c++){
		printf("Digite um n�mero : ");
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
	printf("N�meros positivos : %i\n",p);
	printf("Porcentagem de n�meros Positivos : %.0f\n",pp);
	printf("N�meros negativos : %i\n",n);
	printf("Porcentagem de n�meros negativos : %.0f\n",pn);
	printf("M�dia aritm�tica � : %.2f",t);
}

