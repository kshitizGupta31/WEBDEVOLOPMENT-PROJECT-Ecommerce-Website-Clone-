#include <stdio.h>

int main()
{   
    int age;
   // int vippass=1;
    printf("Enter your age\n\n");
    scanf("%d",&age);
    if(age<=90 &&age>=18 ){
        printf("Your age is below 90 and above 18 so,you are able to drive\n");
    }
   else{printf ("You cannot drive\n");
   }
    return 0;
}
