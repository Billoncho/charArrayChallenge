/*
Author: Billy Gene Ridgeway
Date: June 18th. 2022
Purpose: Course challenge.
    1. Write a funtcion to count the number of characters in a string without using strlen and return an int.
    2. Write a function to concatenate two character strings without using strcat.
    3. Write a function that determines if two strings are equal without using strcmp and return a bool.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int characterCount(char[]);
void stringConcat(char[],char[],char[]);
bool equalStrings(char[],char[]);

int main()
{
    int x = 0;
    const char charString1[] = "God bless the Ridgeway family! ";
    const char charString2[] = "God bless the *Umblas* family! ";
    const char charString3[] = "God bless America! ";
    char result[100];


int characterCount(char count[])        // Function to count the characters in a string.
{
    int x = 0;

    for(int i = 0; count[i] != '\0'; i++)
    {
        x++;
    }
    return x;
}

void stringConcat(char result[], char str1[], char str2[])  // Function to concatenate two strings.
{
    int i = 0;
    int j = 0;

    // Insert the first string into the empty string.
    while(str1[i] != '\0')
    {
        result[j] = str1[i];
        i++;
        j++;
    }

    // Insert the second string into the empty string.
    i = 0;  // Reset the counter to point to the first element in the second string.
    while(str2[i] != '\0')
    {
        result[j] = str2[i];
        i++;
        j++;
    }
    result[j] = '\0';   // Insert the null terminator at the end of the result string.

    printf("\nThe result of the two strings being concatenated is:   %s\n", result);
}

bool equalStrings(char str1[],char str2[])
{
    int x = 0;
    int y = 0;
    int z = 0;

    while(str1[x] != '\0')
    {
        x++;
    }
    while(str2[y])
    {
        y++;
    }
    if( x == y)
    {
        z = 1;
    }else
    {
        z = 0;
    }
    return z;

}



int charNum = characterCount(charString1);                                      // Call the function to count the characters.
printf("\nThe character count in the string is %d characters.\n", charNum);

stringConcat(result, charString1, charString3);                                 // Call the function to concatinate two strings.

bool equalOrNot = equalStrings(charString1, charString3);                       // Call the function to see if two strings are of equal length.

printf("\nThe result of the string comparison in length is ");
printf(equalOrNot ? "true" : "false", stdout);
printf(".\n");

printf("\nThe original three strings were:\n\n%s\n%s\n%s\n", charString1, charString2, charString3);
}
