#include "stdio.h"

int rec(int a, int b){


if (b=0)
{return 1;}
else{
 int res =a * rec(a,b-1);
	return res;
} }


int main()
{
	int a,b;
	printf("Enter a:");
scanf("%d",&a);
	printf("Enter b:");
 scanf("%d",&b);

 printf("result : %d", rec(a,b));














	


}

