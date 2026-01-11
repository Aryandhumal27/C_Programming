import java.util.*;

class Digit {
    public int SumDigit(int iNo) 
    {
        int iDigit = 0;
        int iSum = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while (iNo > 0) {
            iDigit = iDigit % 10;
            iSum = iSum + iDigit;
            iNo = iNo/10;   
        }
        return iSum;
    }
} // End of Number class

class program91 {
    public static void main(String args[]) {
        int iValue = 0;
        int iRet = 0;
        
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        Digit dobj = new Digit();
        iRet = dobj.SumDigit(iValue);

        System.out.println("Sum of digits : " + iRet);
        sobj.close();

        // important

        sobj = null;
        dobj = null;

        System.gc();

    }
}