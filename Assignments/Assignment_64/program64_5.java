/*
    5. Write a program which checks whether first and last bit is On or OFF.
    First bit means bit number 1 and last bit means bit number 32.
*/

import java.util.Scanner;

class program64_5
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);
        long iNo = 0, iResult = 0;
        int iMask = 0;
        System.out.println("Enter the Number : ");
        iNo = sobj.nextLong();

        iMask = 0x80000001;

        iResult = iNo & iMask;

        if(iResult == iMask)
        {
            System.out.println("First And Last bit is ON");
        }
        else
        {
            System.out.println("First And Last bit is OFF");
        }

        sobj.close();
    }
}