#include <stdio.h>
#include <stdlib.h>

double cube (double num);
int max(int num1, int num2, int num3){
    int result;
    if(num1 > num2 && num1 > num3){
        result = num1;
    }else if(num2 > num1 && num2 > num3) {
        result = num2;
    }else{
        result = num3;
        }

}

int main()
{
    /* if statement printf("%d", max(11, 3,2));

    if(3>20 || 20 < 5){
        printf("True");
        } else{
        printf("False");
        }
        */
    /*char characterName[] = "Tom";

    int characterAge = 67;
    printf("There once was a man named %s \n", characterName);
    printf("he was %d years old.\n", characterAge);
    characterAge = 30;
    printf("He really liked the name %s\n", characterName);
    printf("but did not like being %d.\n", characterAge);

    return 0;*/
    /*TIPO
    int age = 40;
    double gpa = 3.6;
    char grade = 'A';
    char phrase[] = "Giraffle Academy";

    printf(" age %d\n", age);
    printf("gpa %f\n",gpa);
    printf("grade %c\n",grade);
    printf("phrase %s\n",phrase);
    */
    /*printf
    printf("Hello\nWorld");
    printf("\nHello\" World");
    printf("\nMy favorite %s is %f or %d","number", 15.76, 500);
    */
    /*Working With Numers
    printf("%f", 5 / 4.0);
    printf("\n%f", pow(4, 3));
    printf("\n%f", sqrt(36));
    printf("\n%f", ceil(36.356));
    printf("\n%f", floor(36.856));
    */
    /*Comments
    /*This prints out text*/
    /*printf("Comments are fun")
    */
    /*Constants
        const int NUM = 5;
        printf("const can't change %d", NUM);
    */
    /*Getting User Input
    int age;
    char name[20];
    printf("Enter your name: ");
    /*scanf("%s", name);*/
    /*fgets(name, 20, stdin);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("%sare %d years old",name, age);
    */

    /*Arrays
        int luckyNumbers[] = {1,2,3,44,95,10};
        int numbers[2];
        printf("Enter number[1]:");
        scanf("%d", &numbers[1]);
        printf("Enter number[0]:");
        scanf("%d", &numbers[0]);


        printf("%d %d", numbers[0], numbers[1]);
        printf("\n%d", luckyNumbers[0]);
        luckyNumbers[0] = 1000;
        printf("\n%d", luckyNumbers[0]);
    */
        /*sayHi();
        sayHi2("Paulo", 32);
        return 0;
        printf("Answer: %f", cube(3.0));
*/
/*Switch Statements
    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);
    switch (grade){
    case 'A':
        printf("You did great! ");
        break;
    case 'B':
        printf("You did alright! ");
        break;
    case 'C':
        printf("You did poorly! ");
        break;
    case 'D':
        printf("You did very bad! ");
        break;
    case 'F':
        printf("You Failed! ");
        break;
    default:
        printf("Invalid Grade");
    }
    */
}
/*Functions*/
    void sayHi(){
    printf("Hi User");
    }
    void sayHi2(char name[], int age){
    printf("\nHi %s, you are %d",name, age);
    }

/*Return Statement*/
double cube(double num){
    double result = num * num *num;
    return result;
}
/*If Statements*/
