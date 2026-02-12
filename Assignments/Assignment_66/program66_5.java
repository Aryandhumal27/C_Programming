/*
    5. Write a program which accept one number from user and toggle contents
    of first and last nibble of the number. Return modified number. (Nibble is a
    group of four bits)

*/

import java.util.Scanner;

class Logic
{
    long ToggleBit(long iNo)
    {
        long iMask = 0;

        iMask = 0xf000000f;

        iNo = iNo ^ iMask;

        return iNo;
    }
}

class program66_5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        long iValue = 0, iRet = 0;

        System.out.println("Enter the number : ");
        iValue = sobj.nextLong();

        Logic lobj = new Logic();

        iRet = lobj.ToggleBit(iValue);

        System.out.println("Updated number : "+ iRet);

        sobj.close();
    }
}
