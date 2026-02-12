/*
    4. Write a program which accept one number from user and toggle 7th and
    10th bit of that number. Return modified number.
    
    Input : 137
    Output : 713

*/

import java.util.Scanner;

class Logic
{
    int ToggleBit(int iNo)
    {
        int iMask = 0;

        iMask = 0x00000240;

        iNo = iNo ^ iMask;

        return iNo;
    }
}

class program65_4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iRet = 0;

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        Logic lobj = new Logic();

        iRet = lobj.ToggleBit(iValue);

        System.out.println("Updated Number : "+ iRet);

        sobj.close();
    }
}