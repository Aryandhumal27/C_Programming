/*
    3. Write a program which checks whether 7th & 15th & 21th, 28th bit is On or OFF
*/

import java.util.Scanner;

class program64_3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0, iMask = 0, iResult = 0;

        System.out.println("Enter the Number : ");
        iNo = sobj.nextInt();

        iMask = 0x08104040;

        iResult = iNo & iMask;

        if(iResult == iMask)
        {
            System.out.println("7th, 15th, 21th and 28th bit is ON");
        }
        else
        {
            System.out.println("7th, 15th, 21th and 28th bit is OFF");
        }

        sobj.close();
    }
}