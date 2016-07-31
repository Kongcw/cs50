#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
   
    if( argc != 2 )
    {
        printf("Usage: workspace/pset2/caesar <key>\n");
        return 1;
   
    }
    else if (argc == 2)
    {
        string k = argv[1];
        int t = atoi(k);
        string input = GetString();
        int result[strlen(input)];
        for(int i =0, n =strlen(input) ; i < n; i++)
        {
          
            if (isalpha(input[i]) && isupper(input[i]))
            {   
               
                
                    result[i] =((int)input[i] - 65 + t) % 26 + 65;
                
            }
            else if (isalpha(input[i]) && islower(input[i]))
            {   
                
            
                     result[i] =((int)input[i] - 97 + t) % 26 + 97 ;
            
            }
            else
            {
                result[i] = input[i];
            }
                
        }
        for (int i=0 , z = strlen(input); i<z; i++)
            printf("%c", result[i]);
            printf("\n");
    }
        
    return 0;
}