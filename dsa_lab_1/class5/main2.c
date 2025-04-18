#include <stdio.h>
int head=-1;
int tail=10;
int arr[10];

int enq(int x){
	if (head ==tail-1)
	{
		printf("stack full \n");
	}
	else
		arr[head+=1] = x;
}
int deq(){
	if (head < 0)
	{
		printf("stack empty");
	}else{
		int temp;
		for (int i = 0; i <= head; ++i)
		{
			temp = arr[i+1];
			arr[i]=temp;

		}

	}

}
void parr(){
	for (int i = 0; i < head; i++)
{
	printf("%d ",arr[i]);
}
}

int main(){
enq(10);
enq(20);
enq(30);
enq(40);
enq(50);

deq();
parr();
	
}