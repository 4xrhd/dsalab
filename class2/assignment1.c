#include <stdio.h>

#define MAX_SIZE 100

// Function prototypes
void insert(int DATA[], int *N, int ITEM, int POS);
void delete(int DATA[], int *N, int POS);
void traverse(int DATA[], int N);
void reverse(int DATA[], int N);

int main() {
    int DATA[MAX_SIZE] = {10, 20, 30, 40, 50};  // Initial array
    int N = 5;  // Initial number of elements
    int choice, ITEM, POS;

    do {
        printf("\nArray Operations Menu:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Traverse\n");
        printf("4. Reverse\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:  // Insert
                printf("Enter the item to insert: ");
                scanf("%d", &ITEM);
                printf("Enter the position to insert at (1-based index): ");
                scanf("%d", &POS);
                insert(DATA, &N, ITEM, POS);
                break;

            case 2:  // Delete
                printf("Enter the position to delete from (1-based index): ");
                scanf("%d", &POS);
                delete(DATA, &N, POS);
                break;

            case 3:  // Traverse
                traverse(DATA, N);
                break;

            case 4:  // Reverse
                reverse(DATA, N);
                break;

            case 5:  // Exit
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice! Please select a valid option.\n");
        }
    } while (choice != 5);

    return 0;
}

// Insert at specified position
void insert(int DATA[], int *N, int ITEM, int POS) {
    if (*N >= MAX_SIZE) {
        printf("Array is full, cannot insert more elements.\n");
        return;
    }
    if (POS < 1 || POS > *N + 1) {
        printf("Invalid position!\n");
        return;
    }

    for (int i = *N; i >= POS; i--) {
        DATA[i] = DATA[i - 1];
    }

    DATA[POS - 1] = ITEM;  // Insert item
    (*N)++;  // Increment size
    printf("Item inserted successfully.\n");
}

// Delete from specified position
void delete(int DATA[], int *N, int POS) {
    if (*N == 0) {
        printf("Array is empty, nothing to delete.\n");
        return;
    }
    if (POS < 1 || POS > *N) {
        printf("Invalid position!\n");
        return;
    }

    for (int i = POS - 1; i < *N - 1; i++) {
        DATA[i] = DATA[i + 1];
    }

    (*N)--;  // Decrement size
    printf("Item deleted successfully.\n");
}

// Display array elements
void traverse(int DATA[], int N) {
    if (N == 0) {
        printf("Array is empty.\n");
        return;
    }

    printf("Array elements: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", DATA[i]);
    }
    printf("\n");
}

// Reverse array
void reverse(int DATA[], int N) {
    int temp;
    for (int i = 0; i < N / 2; i++) {
        temp = DATA[i];
        DATA[i] = DATA[N - i - 1];
        DATA[N - i - 1] = temp;
    }
    printf("Array reversed successfully.\n");
}
