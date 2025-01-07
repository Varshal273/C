#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(){
    
    srand(time(0));

    int randomNumber = (rand() %100)+1;
    // printf("Random Number : %d\n",randomNumber);
    int no_of_guesses = 0;
    int guessed_number;

    do
    {
        printf("Guess the Number : ");
        scanf("%d",&guessed_number);
        system("cls");
        if(guessed_number>randomNumber)
            printf("Lower Number please!\n");
        else if(guessed_number<randomNumber)
            printf("Higher Number Please!\n");
        else
            printf("Congrats!!\n");
        no_of_guesses++;

        // usleep(750000);

    } while (guessed_number!=randomNumber);
    
    printf("You guessed the Number in %d Guesses",no_of_guesses);
    
    return 0;
}