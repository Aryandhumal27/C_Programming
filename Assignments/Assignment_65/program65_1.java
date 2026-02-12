/*
    1. Write a program which accept one number from user and off 7th
    bit of that number if it is on. Return modified number.

    Input : 79
    Output : 15

*/

import java.util.Scanner;

class Logic
{
    int OffBit(int iNo)
    {
        int iMask = 0;

        iMask = 0x00000040;

        iNo = iNo ^ iMask;

        return iNo;
    }
}

class program65_1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iRet = 0;

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        Logic lobj = new Logic();

        iRet = lobj.OffBit(iValue);

        System.out.println("Updated Number : "+iRet);

        sobj.close();

    }
}
