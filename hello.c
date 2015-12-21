#include <stdio.h>
#include "sum.h"
int main(){
	int a,b,c;
	printf("please enter num a,b\n");
	scanf("%d %d",&a,&b);
	c=sum(a,b);
	printf("a+b : %d\n",c);
	return 0;
}
