//  5.Accept one character from user and check whether that character is vowel (a,e,i,o,u) or not

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckVowel
//  Discription :   It is used to check whether a character is a vowel or not
//  Input :         char
//  Output :        bool
//  Author :        Aryan Pandharinath Dhumal
//  Date :          18/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

bool CheckVowel(char cVal)
{
    // Business Logic
    if((cVal == 'a') || (cVal == 'e') || (cVal == 'i') || (cVal == 'o') || (cVal == 'u') || 
       (cVal == 'A') || (cVal == 'E') || (cVal == 'I') || (cVal == 'O') || (cVal == 'U')  )
    {
        return true;                        // Character is a vowel
    }
    else
    {
        return false;                       // Character is not a vowel
    }
}   //  End of function CheckVowel

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';                     // Variable to store user input
    bool bRet = false;                      // Variable to store the result

    printf("Enter Character : \n");
    scanf("%c", &cValue);                   // Accept user input

    bRet = CheckVowel(cValue);              // Function call 

    if(bRet == true)
    {
        printf("%c is Vowel", cValue);
    }
    else
    {
        printf("%c is not Vowel", cValue);
    }

    return 0;
}   //  End of main

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input : a       Output : a is Vowel
//  Input : A       Output : A is Vowel
//  Input : b       Output : b is not Vowel
//
////////////////////////////////////////////////////////////////////////////////////////////////