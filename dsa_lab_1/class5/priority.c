#include <stdio.h>

#define MAX_SIZE 10

int values[MAX_SIZE];   // Array to hold values
int priorities[MAX_SIZE]; // Array to hold priorities
int size = 0;           // Current number of elements in the queue

// Function to check if the queue is full
int isFull() {
    return size == MAX_SIZE;
}

// Function to check if the queue is empty
int isEmpty() {
    return size == 0;
}

// Function to enqueue an element with a specific priority
void enq(int value, int priority) {
    if (isFull()) {
        printf("Queue is full\n");
        return;
    }

    int i;
    // Find the position to insert the new element based on priority
    for (i = size - 1; (i >= 0 && priorities[i] > priority); i--) {
        // Shift elements with higher priority to the right
        values[i + 1] = values[i];
        priorities[i + 1] = priorities[i];
    }
    // Insert the new element
    values[i + 1] = value;
    priorities[i + 1] = priority;
    size++; // Increment the size of the queue
}

// Function to dequeue the element with the highest priority
int deq() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return -1;
    }

    // Remove the element with the highest priority (first element)
    int value = values[0];
    
    // Shift elements to the left
    for (int i = 0; i < size - 1; i++) {
        values[i] = values[i + 1];
        priorities[i] = priorities[i + 1];
    }
    
    size--; // Decrement the size of the queue
    return value;
}

// Function to print the elements in the queue
void parr() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return;
    }
    for (int i = 0; i < size; i++) {
        printf("Value: %d, Priority: %d\n", values[i], priorities[i]);
    }
}

// Main function to demonstrate the priority queue
int main() {
    enq(10, 2);
    enq(20, 1);
    enq(30, 3);
    enq(40, 0);
    enq(50, 5);
    enq(88, 4);
    parr(); // Print queue

    deq(); // Dequeue an element
    printf("after op:\n");
    parr(); // Print queue after dequeue

    return 0;
}
