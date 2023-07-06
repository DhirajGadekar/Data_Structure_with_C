#include<stdio.h>

int top = -1, flag = 0,size;
void push(char stack[],char data) {

    if(top == size - 1) {
        
        printf("Stack is overFlow\n");
    } else {

        top++;
        stack[top] = data;
    }

}

char pop(char stack[]) {

    if(top == -1) {
    
        printf("stack is Underflow\n");
        return ' ';
    } else {
        
        char data = stack[top];
        top--;
        return data;
    }
}
int isMatching(char ch1, char ch2) {

    if(ch1 == '{' && ch2 == '}') {
        
        return 1;
    } else if(ch1 == '[' && ch2 == ']') {

        return 1;
    } else if(ch1 == '(' && ch2 == ')') {

        return 1;
    } else {

        return 0;
    }

}
int isBalanced(char stack[], char text[]) {

    for(int i = 0; i < size; i++) {

        if(text[i] == '(' || text[i] == '[' || text[i] == '{') {

            push(stack,text[i]);
        } else if(text[i] == '}' || text[i] == ']' || text[i] == ')'){

            if(isMatching(pop(stack),text[i]) == 0) {
                
                return 0;
            }
        } 
    }
    return 1;

}
void main() {

    char text[20] = "[][]{(][)}{}[]";
    size = sizeof(text) / sizeof(char);

    char stack[size];
    if(isBalanced(stack, text) == 1) {

        printf("Expression is Balanced\n");
    } else {

        printf("Expression is not balanced\n");
    }
}
