#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

// Push operation
void push(int value) {
    if (top == SIZE - 1) {
        printf("Stack is Full!\n");
    } else {
        top++;
        stack[top] = value;
        printf("Pushed: %d\n", value);
    }
}

// Pop operation
void pop() {
    if (top == -1) {
        printf("Stack is Empty!\n");
    } else {
        printf("Popped: %d\n", stack[top]);
        top--;
    }
}

// Display 
void display() {
    if (top == -1) {
        printf("Stack is Empty!\n");
    } else {
        printf("Stack elements:\n");
        for (int i = 0; i <= top; i++) {
            printf("%d\n", stack[i]);
        }
    }
}

// Check if stack is empty
void isEmpty() {
    if (top == -1)
        printf("Stack is Empty.\n");
    else
        printf("Stack is Not Empty.\n");
}

// Check if stack is full
void isFull() {
    if (top == SIZE - 1)
        printf("Stack is Full.\n");
    else
        printf("Stack is Not Full.\n");
}

int main() {
    
     push(10);
     push(20);
     push(30);
     push(40);
     push(50);
   
    display();

    
    isFull();
    isEmpty();

    pop();
    pop();
    // Display after pop
    display();

   

    return 0;
}

