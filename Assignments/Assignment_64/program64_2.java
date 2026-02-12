/*
    2. Write a program which checks whether 5th & 18th bit is On or OFF
*/

import java.util.Scanner;

class program64_2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0, iMask = 0, iResult = 0;

        System.out.println("Enter the Number : ");
        iNo = sobj.nextInt();

        iMask = 0x00020010;

        iResult = iNo & iMask;

        if(iResult == iMask)
        {
            System.out.println("5th and 18th bit is ON");
        }
        else
        {
            System.out.println("5th and 18th bit is OFF");
        }

        sobj.close();
    }
}