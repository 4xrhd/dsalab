#include <stdio.h>

int a[7];
int size=sizeof(a)/sizeof(a[0]);
int top=-1;
int isEmpty() {
    return (top == -1) ? 1 : 0;
}

void push(int x) {
    if (top == size - 1) {
        printf("Array is full\n");
    } else {
        a[top++] = x; 
}
}



void pop() {
    if (isEmpty()==1) {
        printf("Array is empty\n");
    } else {
        printf("%d  ", a[--top]);
        
        

    }
}

void print(){
for (int i = 0; i < size-1; ++i)
{
	printf("%d ",a[i]);
}
}
int main()
{
	

push(49);
push(29);
push(52);
push(72);
push(90);
push(90);
push(86);

pop();
pop();
pop();
pop();	
pop();
pop();
pop();
}

