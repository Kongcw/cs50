#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    
    
    if (argc != 2 )
    {
        printf("Usage: workspace/pset2/vigenere <keyword>\n");
        return 1;
    }
    
    string key = argv[1];
        
    for (int i =0, keylen = strlen(key); i < keylen; i++)
    {
        if (isalpha(key[i]) == false)
        {
                printf("Keyword must only contain letters A-Z and a-z\n");
                return 1;
        }
    }
    
    string input = GetString();
    int result[strlen(input)], shift;
    
    for (int i = 0, j = 0, inputlen = strlen(input), keylen = strlen(key);  i < inputlen; i++, j++ )
    {
        if(j % keylen == 0 )
        {
            j=0;
        }
        if (isupper(key[j]))
        {
            shift = (int)key[j] - 65;
        }
        else
        {
            shift = (int)key[j] - 97;
        }
        
        if (isalpha(input[i]) && isupper(input[i]))
            {   
               
                
                    result[i] =((int)input[i] - 65 + shift) % 26 + 65;
                
            }
        else if (isalpha(input[i]) && islower(input[i]))
            {   
                
            
                     result[i] =((int)input[i] - 97 + shift) % 26 + 97 ;
            
            }
        else
            {
                result[i] = input[i];
                j--;
            }
        
    }
     for (int i=0 , z = strlen(input); i<z; i++)
            printf("%c", result[i]);
            printf("\n");
            
    return 0;
    
}

