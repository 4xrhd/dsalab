#include <stdio.h>
int main()
{
	
	printf("%ld \n", fib(8));
}
int fib(int x){
	if (x==1){
		return 0;
	}
		if (x==2)
		{
			return	1;	}
			else return fib(x-1)+fib(x-2);

} 