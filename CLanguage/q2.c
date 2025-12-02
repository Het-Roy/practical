//Use a switch statement to write a simple calculator : read two integers and an operator (+, -, *, /, %) and print the result 
#include <stdio.h>
int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    char op;
    scanf(" %c",&op);

    switch (op){
        case '+':
            printf("Sum = %d", num1 + num2);
            break;
        case '-':
            printf("Difference = %d", num1 - num2);
            break;
        case '*':
            printf("Product = %d", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Division = %d", num1 / num2);
            } 
            else {
                printf("Division by zero");
            }
            break;
        case '%':
            if (num2 != 0) {
                printf("Remainder = %d", num1 % num2);
            } 
            else {
                printf("Division by zero");
            }
            break;
        default:
            printf("Invalid operator");
            break;
    }
    return 0;
} 