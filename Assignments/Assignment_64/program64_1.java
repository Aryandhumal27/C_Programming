/*
    1. Write a program which checks whether 15th bit is On or OFF
*/

import java.util.Scanner;

class program64_1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0, iMask = 0, iResult = 0;

        System.out.println("Enter the Number : ");
        iNo = sobj.nextInt();

        iMask = 0x00004000;

        iResult = iNo & iMask;

        if(iResult == iMask)
        {
            System.out.println("15th bit is ON");
        }
        else
        {
            System.out.println("15th bit is OFF");
        }

        sobj.close();
    }
}