#include <stdio.h>
#include <stdlib.h>

int main()
{
    char color[20];
    char plural[20];
    char celebrity[20];

    printf("Enter a color:");
    scanf("%s", color);
    printf("Enter a plural noun:");
    scanf("%s", plural);
    printf("Enter a celebrity");
    scanf("%s", celebrity);

    printf("\nRoses are %s", color);
    printf("\n%s are blue", plural);
    printf("\nI love %s", celebrity);
    return 0;
}
