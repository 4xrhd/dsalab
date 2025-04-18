#include <stdio.h>

int arr[10]; // Array to hold elements
int top = -1; // Top pointer, starts at -1 (empty array)
int size = sizeof(arr) / sizeof(arr[0]); // Size of the array

// Function to print the array
void parr() {
    printf("\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to check if the array is empty
int isEmpty() {
    return (top == -1) ? 1 : 0;
}

// Function to pop an element from the array
void pop() {
    if (isEmpty()) {
        printf("Array is empty\n");
    } else {
        // printf("Popped: %d\n", arr[top--]); // Decrease top after printing
        printf("%d  ", arr[top--]);
    }
}

// Function to push an element into the array
void push(int x) {
    if (top == size - 1) {
        printf("Array is full\n");
    } else {
        arr[++top] = x; // Increment top and assign value
    }
}

int main() {
    push(10); // Push 10 into the array
    push(20); // Push 20 into the array
    push(40); // Push 40 into the array
    
    pop(); // Pop an element
    
    push(50); // Push 50 into the array
    pop(); // Pop an element
    pop(); // Pop an element
    pop(); // Pop an element
    push(78); // Push 78 into the array

    // parr(); // Uncomment to print the array

    return 0;
}
