
// #include <stdio.h>
// int main(){
//     float a,b;
//     char d;
//     scanf("%d %d %c",&a,&b,&d);
//     if(d=='+'){printf("%d",a+b);}
//     else if(d=='-'){printf("%d",a-b);}
//     else if(d=='*'){printf("%d",a*b);}
//     else if(d=='/'){printf("%d",a/b);}
//     else{printf("error");}
//    return 0;}


#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Asking for user input
    
    scanf("%c", &operator);
    
    scanf("%lf %lf", &num1, &num2);

    // Performing calculations based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Error! Division by zero is not allowed.\n");
                return 1; // Exit with error
            }
            break;
        default:
            printf("error");
            return 1; // Exit with error
    }

    // Displaying the result
    printf("Result: %.2lf\n", result);
    return 0;
}