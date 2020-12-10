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
struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};
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
    /*Structs
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.5;
    strcpy( student1.name, "Jim");
    strcpy( student1.major, "Business");
    printf("%d", student1.age);
    printf("\n%f", student1.gpa);
    printf("\n%s", student1.name);
    printf("\n%s", student1.major);*/
    /*loop while
    int index = 1;
    while(index <= 5){
        printf("%d\n", index);
        index ++;
    }
    do{
        index --;
        printf("%d\n", index);
    }while (index > -2);
    */
    /*for loop
    int i;
    for (i = 1; i <= 5; i++){
        printf("%d\n", i);
    }
    int x;
    int luckNumbers[] = {4, 2, 88, 8, 17, 1};
    for (x = 0; x <= 5; x++){
        printf("%d\n", luckNumbers[x]);
    }
    }*/
    /*2d Array Nested Loops
    int i, j;
    int nums[2][3] = {
    {1, 2, 4},{32, 13, 43}};
    for (i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
            printf("%d ", nums[i][j]);
        }
        printf("\n");
    }*/
    /*Memory Adresses
    int age = 30;
    double gpa = 3.4;;
    char grade = 'A';
    printf("age: %p\mgps: %p\ngrade: %p", &age, &gpa, &grade);
    */
    /*Pointers
    int age = 30;
    int * pAge = &age;
    double gpa = 3.4;;
    double * pGpa = &gpa;
    char grade = 'A';
    char * pGrade = &grade;
    */
    /*Dereferencing Pointers
    int age = 30;
    int * pAge = age;
    printf("%p\n", &age);
    printf("%d\n", &*&age);
    printf("%d\n", *&*&age);
    printf("%p\n", &pAge);
    printf("%d\n", &pAge);
    printf("%d\n", &pAge);
    */
    /*Writing Files
    FILE * fpointer = fopen("employees.txt", "w");
    fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accounting");
    fclose(fpointer);
    FILE * fpointer = fopen("employees.txt", "a");
    fprintf(fpointer,"\nKelly, Customer Service");
    fclose(fpointer);*/
    /*Reading Files*/
    FILE * fpointer = fopen("employees.txt", "r");
    char line[255];
    fgets(line, 255, fpointer);
    fgets(line, 255, fpointer);
    printf("%s", line);
    fclose(fpointer);

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
