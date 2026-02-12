/*
    3. Write a program which accept one number from user and check whether
    9th or 12th bit is on or off.

    Input : 257
    Output : TRUE
*/

import java.util.Scanner;

class Logic
{
    boolean ChkBit(int iNo)
    {
        int iMask = 0x00000900, iResult = 0;

        iResult = iNo & iMask;

        if(iResult != 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    } 
}

class program67_3 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        boolean bRet = false;

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        Logic lobj = new Logic();

        bRet = lobj.ChkBit(iValue);

        if(bRet == true)
        {
            System.out.println("9th or 12th bit is ON");
        }
        else
        {
            System.out.println("9th and 12th bit is OFF");
        }

        sobj.close();


    }
}
