
#include <stdio.h>

#define SIZE 100

int stack[SIZE];
int top = -1;

// Push number to stack
void push(int num) {
    stack[++top] = num;
}

// Pop number from stack
int pop() {
    return stack[top--];
}

// Evaluate postfix expression
int evaluatePostfix(char postfix[]) {
    int i = 0;
    char ch;

    while(postfix[i] != '\0') {
        ch = postfix[i];

        // If character is a digit (0 to 9)
        if(ch >= '0' && ch <= '9') {
            push(ch - '0');  // Convert char to int (e.g., '3' → 3)
        }
        // If character is an operator
        else {
            int b = pop();
            int a = pop();
            int result;

            if(ch == '+')
                result = a + b;
            else if(ch == '-')
                result = a - b;
            else if(ch == '*')
                result = a * b;
            else if(ch == '/')
                result = a / b;

            push(result);
        }

        i++;
    }

    // Final result
    return pop();
}

int main() {
    char expression[SIZE];

    printf("Enter postfix expression (example::23*4+): ");
    scanf("%s", expression);

    int result = evaluatePostfix(expression);
    printf("Output: %d\n", result);

    return 0;
}
