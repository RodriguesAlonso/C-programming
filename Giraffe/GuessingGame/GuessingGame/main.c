#include <stdio.h>
#include <stdlib.h>

int main()
{
  int secretNumber = 5;
  int guess;
  int guessCont = 0;
  int guessLimite = 3;
  int outOfGuesses = 0;
    while (guess != secretNumber && outOfGuesses == 0){
        if (guessLimite > guessCont){
            printf("Enter a number: ");
            scanf("%d", &guess);
            guessCont++;
        } else {
        outOfGuesses = 1;}

  }
  if (outOfGuesses == 1){
    printf("Out of Gueses");
  }else{
      printf("You Win!");
  }

    return 0;
}
