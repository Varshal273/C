#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main(){
    
    srand(time(0));
    int choice;
    printf("STONE PAPER SCISSOR\n1. Stone\n2. Paper\n3. Scissor\nMake your Choice : ");
    scanf("%d",&choice);
    int computer = (rand() %3)+1;   //returns 0 1 2 and +1 increments value by 1  
    printf("you : %d | Computer : %d\n",choice,computer);
    if(choice < 1 && choice > 3){
        printf("Foul! Choice is Invalid\n");
        return 0;
    }
    if(choice == computer){
        printf("Its a Draw!\n");
    }
    if(choice == computer - 1 || choice - 2 == computer){
        printf("You Lose | Computer Wins\n");
    }
    else if(computer == choice - 1 || computer - 2 == choice){
        printf("You Wins | Computer Lose\n");
    }
    return 0;
}