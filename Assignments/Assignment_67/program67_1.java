/*
    1.Write a program which accept one number from user and count number of
    ON (1) bits in it without using % and / operator.

    Input : 11
    Output : 3
*/
import java.util.Scanner;

class Logic
{
    int CountOne(int iNo) 
    {
        String Binary = null;
        int iCount = 0;

        if(iNo == 0)
        {
            return iCount;
        }
                            
        Binary = Integer.toBinaryString(iNo);

        for(int i = 0; i < Binary.length(); i++)
        {
            if(Binary.charAt(i) == '1')
            {
                iCount++;
            }
        }

        return iCount;
    }
}

class program67_1 
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0, iRet = 0;
        
        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        Logic lobj = new Logic();

        iRet = lobj.CountOne(iValue);

        System.out.println("Count of ON bits are : "+iRet);

        sobj.close();
    }
}
