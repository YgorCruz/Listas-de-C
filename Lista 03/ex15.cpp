#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	int x=92,c,q;
	setlocale(LC_ALL,"Portuguese");
	while(x<=14780){
		c=1;
		q=0;
		while(c<=x){
			if(x%c==0){
				q++;
				}
				c++;
		}
		if(q==2){
			printf("Primo: %i\n",x);
		}
		x++;
	}
}

