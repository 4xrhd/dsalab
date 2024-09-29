#include <stdio.h>
#include <stdlib.h>
//insert

int main() {

    int arr[5];
    int n = 5;
int pos = 1;
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
//right
for (int i = n; i < n-1; ++i) {
     arr[i]=arr[i+1];
    }
       //print again
       for (int i = 0; i < n; ++i) {
        printf("%d  ", arr[i]);
    }
     printf(" \n done 3 \n");
    return 0;
}
