
#include <stdio.h>
#include <string.h>

char stackArr[50];
int top = -1;

void push(char c) {
    top++;
    stackArr[top] = c;
}

char popChar() {
    char ch = stackArr[top];
    top--;
    return ch;
}

int main() {
    char exp[50];
    int i;

    printf("Enter expression: ");
    scanf("%s", exp); 

    for(i = 0; exp[i] != '\0'; i++) {
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[') {
            push(exp[i]);
        }
        else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']') {
            if(top == -1) {
                printf("Invalid Expression\n");
                return 0;
            }
            char ch = popChar();
            if((ch == '(' && exp[i] != ')') ||
               (ch == '{' && exp[i] != '}') ||
               (ch == '[' && exp[i] != ']')) {
                printf("Invalid Expression\n");
                return 0;
            }
        }
    }

    if(top == -1)
        printf("Valid Expression\n");
    else
        printf("Invalid Expression\n");

    return 0;
}
