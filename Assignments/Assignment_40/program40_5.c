/*
    5. Write a recursive program which display below pattern. 

    Input :     6
    Output :    a   b   c   d   e   f
*/

#include<stdio.h>

void Display(int iNo)
{
    static char ch = 'a';

    if(ch <= ('a' + (iNo - 1)))
    {
        printf(" %c\t", ch);
        ch++;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}