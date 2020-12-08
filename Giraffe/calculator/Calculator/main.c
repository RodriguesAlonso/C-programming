#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1;
    double num2;
    char opr;

    printf("Enter a first number: ");
    scanf("%lf", &num1);
    printf("Enter operator: ");
    scanf(" %c", &opr);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    if(opr == '+'){
        printf("\nAnswer: %f", num1 + num2);
    }
        else if(opr == '-'){
        printf("\nAnswer: %f", num1 - num2);
    }
        else if(opr == '*'){
        printf("\nAnswer: %f", num1 * num2);
    }
        else if(opr == '/'){
        printf("\nAnswer: %f", num1 / num2);
        }else{
            printf("invalid Operator");
    }




    return 0;
}
