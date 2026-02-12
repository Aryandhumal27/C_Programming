/*
    2. Write a program which accept two numbers from user and display position
    of common ON bits from that two numbers.

    Input : 10 15 (1010 1111)
    Output : 2 4
*/

import java.util.Scanner;

class Logic
{
    void CommonBits(int iNo1, int iNo2)
    {
        int iResult = 0, i = 0, iCount = 0;
        String Binary = null;

        iResult = iNo1 & iNo2;

        Binary = Integer.toBinaryString(iResult);

        for(i = (Binary.length() - 1); i >= 0; i--)
        {
            iCount++;
            if(Binary.charAt(i) == '1')
            {
                System.out.print((iCount) + "\t");
            }
        }
    }
}

class program67_2 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter the first number : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the Second number : ");
        iValue2 = sobj.nextInt();

        Logic lobj = new Logic();

        lobj.CommonBits(iValue1, iValue2);

        sobj.close();

    }
}
