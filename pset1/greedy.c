#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int  count = 0;
    float owed, quaters = 25, dimes = 10, nickels = 5, pennies = 1 ;
   
    do
    {
         printf("O hai!  How much change is owed?\n");
        owed = GetFloat();
    } while(owed <= 0);
    owed = owed *100;
    owed = round(owed);
    
      while (owed >= quaters)
    {
        count ++  ;
        owed = owed - quaters;
    }
      while (owed >= dimes)
    {
        count ++ ;
        owed = owed - dimes;
    }
      while (owed >= nickels)
    {
        count ++ ;
        owed = owed - nickels;
    }
      while (owed >= pennies)
    {
        count  ++ ;
        owed = owed -pennies;
    } 
    
    printf("%d\n", count);
    return 0;
    
}
