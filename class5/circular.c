#include <stdio.h>

int head = -1;
int tail = -1;
int arr[10];
int size = 10;

int isFull() {
    return (tail + 1) % size == head;
}

int isEmpty() {
    return head == -1;
}

void enq(int x) {
    if (isFull()) {
        printf("Queue is full\n");
        return;
    }
    if (isEmpty()) {
        head = 0;
    }
    tail = (tail + 1) % size;
    arr[tail] = x;
}

int deq() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return -1;
    }
    int value = arr[head];
    if (head == tail) {
        // Queue is now empty after removing the last element
        head = -1;
        tail = -1;
    } else {
        head = (head + 1) % size;
    }
    return value;
}

void parr() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return;
    }
    int i = head;
    while (i != tail) {
        printf("%d ", arr[i]);
        i = (i + 1) % size;
    }
    printf("%d\n", arr[tail]); // Print the last element
}

int main() {
    enq(10);
    enq(20);
    enq(30);
    enq(40);
    enq(50);
    enq(10);
    enq(88);
    parr(); // Print queue
    
    deq(); // Dequeue an element
    parr(); // Print queue after dequeue

    return 0;
}
