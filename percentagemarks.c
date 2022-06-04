#include<stdio.h>
int main(){
    int PHYSICS,CHEMISTRY,MATHS;
    float TOTAL;
     printf("Enter your number in PHYSICS\n");
     scanf("%d", &PHYSICS);
      printf("Enter your number in CHEMISTRY\n");
      scanf("%d",&CHEMISTRY);
      printf("Enter your number in MATHS\n");
      scanf("%d",&MATHS);
    TOTAL=(PHYSICS+CHEMISTRY+MATHS)/3;
     if(TOTAL<40||PHYSICS<33||CHEMISTRY<33||MATHS<33){
         printf("YOUR PERCENTAGE IS %f SO YOU ARE FAIL\n",TOTAL);
     }
      else{
          printf("YOUR PERCENTAGE IS %f SO YOU ARE PASSED\n", TOTAL);
      }
       return 0;
}