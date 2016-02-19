#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int a,b,c,x1,x2;
	printf("vvedite koefficenty kvadratnogo uravneniia");
	scanf("%d %d %d",&a,&b,&c);
	int t=pow((b*b-4*a*c),0.5);
	x1=(-1*b+t)/2*a;
	x2=(-1*b-t)/2*a;
	printf("%d %d ",x1,x2);
      
}


