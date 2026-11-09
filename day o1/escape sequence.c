#include<stdio.h>
int main()
{
     int number;
     printf("enter ur number:");
     scanf("%d",&number);
     if(number>=33)
         {
              printf("Pass");
              if(number>=80)
               printf("You got A+");
              else
               printf("You din't get A+");

         }
     else
          printf("Fail");


     return 0;
}
