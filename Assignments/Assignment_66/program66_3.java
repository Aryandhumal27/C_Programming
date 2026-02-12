/*
    3. Write a program which accept one number and position from user and on
    that bit. Return modified number.

    Input : 10 3
    Output : 14
*/

import java.util.Scanner;

class Logic
{
    int OnBit(int iNo, int pos)
    {
        int iMask = 0x00000001;

        iMask = iMask << (pos - 1);

        iNo = iNo | iMask;

        return iNo;
    }
}

class program66_3 
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

        iRet = lobj.OnBit(iValue, iPos);

        System.out.println("Updated number : "+ iRet);

        sobj.close();
    }
}
