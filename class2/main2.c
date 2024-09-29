#include <stdio.h>

int main() {
    //data array
    int DATA[] = {10, 20, 30, 40, 50};
    int ITEM;

    int N = sizeof(DATA) / sizeof(DATA[0]);
    int LOC = 0;
    

    printf("Enter the item to search for: ");
    scanf("%d", &ITEM);


    for (int i = 0; i < N; i++) {
        if (DATA[i] == ITEM) {
            LOC = i + 1;
            break;
        }
    }
    
    if (LOC == 0) {
        printf("Item is not in the array data\n");
    } else {
        printf("LOC is the location of item: %d \n", LOC);
    }
    
    return 0
}
