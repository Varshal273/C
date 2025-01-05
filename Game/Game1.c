#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    srand(time(0));

    int randomNumber = (rand() %100)+1;
    // printf("Random Number : %d\n",randomNumber);
    int no_of_guesses = 0;
    int guessed;

    do
    {
        printf("Guess the Number : ");
        scanf("%d",&guessed);
        if(guessed>randomNumber){
            printf("Lower Number please!\n");
        }
        else{
            printf("Higher Number Please!\n");
        }
        no_of_guesses++;
            
    } while (guessed!=randomNumber);
    
    printf("You guessed the Number in %d Guesses",no_of_guesses);
    
    return 0;
}