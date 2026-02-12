/*
    2. Write a program which accept one number from user and off 7th and 10th
    bit of that number. Return modified number.

    Input : 577
    Output : 1
*/

import java.util.Scanner;

class Logic
{
    int OffBit(int iNo)
    {
        int iMask = 0;

        iMask = 0x00000240;

        iNo = iNo ^ iMask;

        return iNo;
    }
}

class program65_2
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

