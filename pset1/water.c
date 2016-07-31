#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf(" minutes:");
    int minutes, bottles;
    minutes =GetInt();
    bottles = minutes * 12;
    printf(" bottles: %d" , bottles);
    
}