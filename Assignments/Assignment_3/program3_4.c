//  4.Accept one character from user and convert case of that character.

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayConvert
//  Discription :   It is used to convert the case of a character
//  Input :         char
//  Output :        void
//  Author :        Aryan Pandharinath Dhumal
//  Date :          18/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayConvert(char cValue)
{
    if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("%c", (cValue - 32));                        // Convert to uppercase
    }
   
    else if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("%c", (cValue + 32));                        // Convert to lowercase
    }
}   //  End of function DisplayConvert

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';                                     // Variable to store user input

    printf("Enter character : \n");
    scanf("%c", &cValue);                                   // Accept user input

    DisplayConvert(cValue);                                 // Function call 

    return 0;
}   //  End of main

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input : a       Output : A
//  Input : A       Output : a
//
////////////////////////////////////////////////////////////////////////////////////////////////