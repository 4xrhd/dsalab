#include <stdio.h>


int arr[10];
int top = -1;
int size=sizeof(arr) / sizeof(arr[0]);


void parr(){
	printf("\n ");
	for (int i = 0; i < size; ++i)
		{
		printf("%d ",arr[i]);
		}
		printf("\n ");
}
int isEmpty(){

 if (top ==-1)
 {
 	return 1;
 }
 else
 	return 0;

}
void pop(){
	if(isEmpty()==1){
		printf("arr is empty");

	}
	else{
		printf("%d ",arr[top]);
		top=top-1;
	}
}

void push(int x){
if (top == size-1)
{
printf("array full");
}
	else{	
	arr[++top]=x;
	}
}

int main()
{
// 	int ch;
// printf("\n enter choice \n 1. for insert \n 2 for pop \n default print array: \t");
// scanf("%d",&ch);
// 	if (ch == 1)
// 	{
// 		push();
// 	}
// 	else if(ch ==2){
// 		pop();

// 	}
// 	else {
// 		parr();
// 	}

	push(10);
	push(20);
	push(40);
	
	pop();

	push(50);
	pop();
	pop();
	pop();
	push(78);
	// parr();
	

	return 0;

}



