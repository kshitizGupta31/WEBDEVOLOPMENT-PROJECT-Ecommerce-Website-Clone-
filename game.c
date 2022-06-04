#include<stdio.h> 
#include<stdlib.h>
#include<time.h>

int main()
{   
    int number,guess,nguesses=1;
    srand(time(0));
    number = rand()%100 ; //this make the no between 1 to 100
    do{
        printf("Guess the number between 0 to 100\n");
        scanf("%d",&number);
        if(guess>number){
            printf("Choose the shorter one please!\n");
            
        }
        else if(guess<number){
            printf("Higher one please!\n");
        }
        else{
            printf("The numbere you guess in %d attempts\n", nguesses);
        }
     nguesses++;
    }while(guess!=number);

    return 0;
}
