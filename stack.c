#include <stdio.h>
#define MAX_SIZE 10

int stack[MAX_SIZE];
int top = -1;

void push(int data) {
    if (top == MAX_SIZE - 1) {
        printf("Stack is full. Cannot push %d.\n", data);
        return;
    }
    stack[++top] = data;
    printf("Pushed %d onto the stack.\n", data);
}

void pop() {
    if (top == -1) {
        printf("Stack is empty. Cannot pop.\n");
        return;
    }
    printf("Popped %d from the stack.\n", stack[top--]);
}

void peek() {
    if (top == -1) {
        printf("Stack is empty. Cannot peek.\n");
        return;
    }
    printf("Top element of the stack is %d.\n", stack[top]);
}

int main() {
    int choice, data;

    while (1) {
        printf("Choose operation:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Quit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to push: ");
                scanf("%d", &data);
                push(data);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}