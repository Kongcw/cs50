#include <stdio.h>
#include <cs50.h>

int main(void)
{
    
    int height, space, hash, step, j;
   
    
    do{
        
        printf("height:");
        height = GetInt();
    }
    while ( height < 0  || height >23);
    
    step = height-2;
    for(j = 0; j < height; j++)
    {
        for( space = 0; space <= step; space++ )
        {
            printf(" ");
        }
        for ( hash = 0 ; hash< height - step; hash++)
        {
            printf("#");
        }
        printf("\n");
        step--;
    }
}