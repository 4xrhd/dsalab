#include <stdio.h>
#include <stdlib.h>

int main() {

    int arr[5];
    int n = 5;
int p=3;
//take
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
      printf(" done one \n");
//print

    for (int i = 0; i < n; ++i) {
        printf("%d  ", arr[i]);
    }
     printf(" \n done 2 \n");
//left
 for (int i = 0; i < p; ++i) {
	printf("%d  ", arr[i]);
    }
       //print again
       for (int i = 0; i < n-1; ++i) {
        printf("%d  ", arr[i]);
    }
     printf(" \n done 3 \n");

    return 0;
}
