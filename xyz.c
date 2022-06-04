#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int number,guess,nguesses=1;
srand(time(0));
 number= rand()%100+1;
// printf("the no. is %d",number);
printf("the number is%d\n",number);

 do{
        printf("Guess the number between 0 to 100\n");
        scanf("%d",&guess);
        if(guess>number){
            printf("Lower one please!\n");
            
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