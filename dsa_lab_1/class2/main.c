#include <stdio.h>

int main() {
    int data[] = {10, 20, 30, 40, 50};
    int n = 4;
    int item;
    int loc = 0;

    printf("Enter the item to search for: ");
    scanf("%d", &item);

    for (int k = 0; k < n; k++) {
        if (data[k] == item) {
            loc = k;
            break;
        }
    }

    if(loc == 0){
    	printf("Item is not found \n ");

    }else {
    	printf("Item is found at %d \n ",loc);
    }
}
