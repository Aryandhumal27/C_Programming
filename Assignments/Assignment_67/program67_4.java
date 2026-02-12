/*
    4. Write a program which accept one number , two positions from user and
    check whether bit at first or bit at second position is ON or OFF.

    Input : 10 3 7
    Output : TRUE
*/

import java.util.Scanner;

class Logic
{
    boolean ChkBit(int iNo, int pos1, int pos2)
    {
        int iMask = 0, iMask1 = 0x1, iMask2 = 0x1;
        int iResult = 0;

        iMask1 = iMask1 << (pos1-1);
        iMask2 = iMask2 << (pos2-1);

        iMask = iMask1 | iMask2;

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

class program67_4 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        int iPos1 = 0, iPos2 = 0;
        boolean bRet = false;

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        System.out.println("Enter the first Position : ");
        iPos1 = sobj.nextInt();

        System.out.println("Enter the Second Position : ");
        iPos2 = sobj.nextInt();

        Logic lobj = new Logic();

        bRet = lobj.ChkBit(iValue, iPos1, iPos2);

        if(bRet == true)
        {
            System.out.println("first position bit or second position bit is ON");
        }
        else
        {
            System.out.println("first position and second position is OFF");
        }

        sobj.close();


    }
}
