/*
    5. Write a program which accept one number from user and range of
    positions from user. Toggle all bits from that range.

    Input : 897     9   13
    Toggle all bits from position 9 to 13 of input number ie 879.
*/

import java.util.Scanner;

class Logic
{
    int ToggleBitRange(int iNo, int iStart, int iEnd)
    {
        int i = 0, iMask = 0;

        if(iStart > iEnd)
        {
            System.out.println("Invalid Positions");
            return -1;
        }

        for(i = (iStart); i <= (iEnd); i++)
        {
            int iMaskBit = 0x1;
            iMaskBit = iMaskBit << (i - 1);
            iMask = iMask | iMaskBit;
        }

        iNo = iNo ^ iMask;

        return iNo;
    }
}

class program67_5 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iStartRange = 0, iEndRange = 0, iRet = 0;

        System.out.println("Enter the number");
        iValue = sobj.nextInt();

        System.out.println("Enter the start position of range : ");
        iStartRange = sobj.nextInt();

        System.out.println("Enter the end position of range : ");
        iEndRange = sobj.nextInt();

        Logic lobj = new Logic();

        iRet = lobj.ToggleBitRange(iValue, iStartRange, iEndRange);

        System.out.println("Updated number is : "+iRet);

        sobj.close();
    }
    
}
