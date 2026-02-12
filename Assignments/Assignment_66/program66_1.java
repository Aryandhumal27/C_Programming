/*
    1.Write a program which accept one number and position from user and
    check whether bit at that position is on or off. If bit is on return TURE
    otherwise return FALSE.   

    Input : 10 2
    Output : TRUE
*/

import java.util.Scanner;

class Logic
{
    boolean ChkBit(int iNo, int pos)
    {
        int iMask = 0x00000001, Result = 0;
        
        iMask = iMask << (pos - 1);

        Result = iNo & iMask;

        if(Result == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

class program66_1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iPos = 0;
        boolean bRet = false;

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        System.out.println("Enter the Position : ");
        iPos = sobj.nextInt();

        Logic lobj = new Logic();

        bRet = lobj.ChkBit(iValue, iPos);

        if(bRet == true)
        {
            System.out.println(iPos + " Bit is ON");
        }
        else
        {
            System.out.println(iPos + " Bit is OFF");
        }

        sobj.close();
    }

}