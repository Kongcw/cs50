/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
   int first, last, middle;
    first = 0;
    last = n;
    middle = n/2;
    while( first <= last)
    {
        if( values[middle] == value )
        {
            return true;
        }    
        else if (value > values[middle])
        {
           
           first = middle + 1;
            
        }
        else if (value < values[middle])
        {
           
            last =  middle - 1;

        }
        middle = (first + last) /2;
    }
    return false; 
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    int min, temp, no_temp;
    // TODO: implement an O(n^2) sorting algorithm
    for (int i = 0; i < n; i++)
    {
        min = values[i];
        for(int j = i; j < n; j++)
        {
            if (values[j] <= min)
            {
                min = values[j];
                no_temp = j;
            }    
        }
        temp = values[i];
        values[i] = min;
        values[no_temp] = temp;
    }
    return;
}