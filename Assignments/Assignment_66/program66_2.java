/*
    2. Write a program which accept one number and position from user and off
    that bit. Return modified number.

    Input : 10 2
    Output : 8
*/

import java.util.Scanner;

class Logic
{
    int OffBit(int iNo, int pos)
    {
        int iMask = 0x00000001;

        iMask = iMask << (pos - 1);

        iNo = iNo ^ iMask;

        return iNo;
    }
}

class program66_2 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iPos = 0, iRet = 0;

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        System.out.println("Enter the Position : ");
        iPos = sobj.nextInt();

        Logic lobj = new Logic();

        iRet = lobj.OffBit(iValue, iPos);

        System.out.println("Updated number : "+ iRet);

        sobj.close();
    }
}
