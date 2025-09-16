#include <stdio.h>

#define SIZE 100

char stack[SIZE];
int top = -1;

// Push character to stack
void push(char ch) {
    stack[++top] = ch;
}

// Pop character from stack
char pop() {
    return stack[top--];
}

// Return precedence of operators
int precedence(char op) {
    if(op == '*' || op == '/')
        return 2;
    else if(op == '+' || op == '-')
        return 1;
    else
        return 0;
}

// Check if character is an operator
int isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

// Convert infix to postfix
void infixToPostfix(char infix[]) {
    char postfix[SIZE];
    int i = 0, j = 0;
    char ch;

    while(infix[i] != '\0') {
        ch = infix[i];

        // Check if character is an operand (A-Z or a-z)
        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            postfix[j++] = ch;
        }
        // If character is an operator
        else if(isOperator(ch)) {
            while(top != -1 && precedence(stack[top]) >= precedence(ch)) {
                postfix[j++] = pop();
            }
            push(ch);
        }

        i++;
    }

    // Pop remaining operators from stack
    while(top != -1) {
        postfix[j++] = pop();
    }

    postfix[j] = '\0';  // End the string

    printf("Output: %s\n", postfix);
}

int main() {
    char expression[SIZE];

    printf("Enter infix expression : ");
    scanf("%s", expression);

    infixToPostfix(expression);

    return 0;
}

