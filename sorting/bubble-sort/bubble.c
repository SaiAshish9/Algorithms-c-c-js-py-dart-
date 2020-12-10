#include<stdio.h>
#include<time.h>

void delay(unsigned int msec)
{clock_t goal;
do{
goal = msec  + clock();
}while(goal>clock());
}

void main(){
	// clock_t x = clock();
	int a[]={1,4,3,2};
	int i,j,t;
	for(i=0;i<4;i++){
		for(j=0;j<4-i-1;j++){
			if(a[j]>a[j+1]){
                t= a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
    for(i=0;i<4;i++){
    	printf("%d\n",a[i]);
    }
	// delay(5);
	// clock_t y = clock();
	// printf("%ld\n",(y-x)/CLOCKS_PER_SEC);

	// O(1) O(n^2) O(n^2)
}