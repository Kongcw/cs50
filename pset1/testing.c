#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float c;
    while(true){
    c=GetFloat();
    c=c*100;
    c=round(c);
    printf("%f\n", c);
}}