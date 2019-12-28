#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	int v,c1=0,c2=0,vn=0,vb=0,tv=0;
    setlocale(LC_ALL,"Portuguese");
	
 	do{
 		printf("Voto (1,2,3,4): ");
 		scanf("%i",&v);
 		if(v==1){
 		c1++;	
		 }
		 if(v==2){
		 c2++;
		 }
		 if(v==3){
		 vn++;
		 }
		 if(v==4){
		 vb++;
		 }
	 }while(v!=0);
	 tv=c1+c2+vn+vb;
	 printf("Cand 1: %.2f%%\n",(float)c1/tv*100);
	 printf("Cand 2: %.2f%%\n",(float)c2/tv*100);
	 printf("Nulo: %.2f%%\n",(float)vn/tv*100);
	 printf("Branco: %.2f%%\n",(float)vb/tv*100);
	system("pause");
}

