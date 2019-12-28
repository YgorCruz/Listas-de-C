#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	int a[100],i,int01=0,int02=0,int03=0,int04=0,int05=0;
	
	srand(time(NULL));
	
	for(i=0;i<100;i++){
		a[i] = rand()%500;
		
		if(a[i]<=100){
			int01++;
		}
		else if(a[i]>=101 && a[i]<=200){
			int02++;
		}
		else if(a[i]>=201 && a[i]<=300){
			int03++;
		}
		else if(a[i]>=301 && a[i]<=400){
			int04++;
		}
		else if(a[i]>=401 && a[i]<=500){
			int05++;
		}
	}
	
	printf("\n0 a 100 = %i\n101 a 200 = %i\n201 a 300 = %i\n301 a 400 = %i\n401 a 500 = %i",int01,int02,int03,int04,int05);
	
}

