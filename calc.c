#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int a,b,c;
	float x1,x2;
	printf("Input CKA a,b,c: ");
	scanf("%d %d %d",&a,&b,&c);
	float t=pow((b*b-4*a*c),0.5);
	x1=(-1*b+t)/2*a;
	x2=(-1*b-t)/2*a;
	printf("%f %f ",x1,x2);
      
}


