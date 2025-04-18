#include <stdio.h>


int arr[10];
int head = -1;
int size=sizeof(arr) / sizeof(arr[0]);
int tail= 10;

void parr(){
	printf("\n ");
	for (int i = 0; i < size; ++i)
		{
		printf("%d ",arr[i]);
		}
		printf("\n ");
}
int isEmpty(){

 if (head ==-1)
 	return 1;
 else
 	return 0;

}

void pop(){
	if(isEmpty()==1){
		printf("arr is underflow");

	}
	else{
		for (int i = 0; i < head - 1; i++)
            arr[i] = arr[i + 1];
	}
		
		
		}
	

void push(int x){
if (head == tail-1)
{
printf("array full");
}
	else{	
	arr[++head]=x;
	}
}

int main()
{


	push(10);
	push(20);
	push(40);
	


	push(50);
	
	
	push(78);
	 parr();
	pop();
	parr();
	pop();
	parr();	

	return 0;

}



