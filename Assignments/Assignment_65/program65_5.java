/*
    5. Write a program which accept one number from user and on its first 4
    bits. Return modified number. 

    Input : 73
    Output : 79

*/

import java.util.Scanner;

class Logic
{
    int OnBit(int iNo)
    {
        int iMask = 0;

        iMask = 0x0000000f;

        iNo = iNo | iMask;

        return iNo;
    }
}

class program65_5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iRet = 0;

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        Logic lobj = new Logic();

        iRet = lobj.OnBit(iValue);

        System.out.println("Updated Number : "+ iRet);

        sobj.close();
    }
}