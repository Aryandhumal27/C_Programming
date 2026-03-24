import java.util.Scanner;

class Number {
    public long CalculateFactorial(long iNo) 
    {
        long i = 0; 
        long lFact = 0;             // Important

        lFact = 1;
        i = iNo;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while (iNo > 0) {
            lFact = lFact * i;
            i--;
        }
        return lFact;
    }
} // End of Number class

class program89 {
    public static void main(String args[]) {
        int iValue = 0;
        long lRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        Number nobj = new Number();
        lRet = nobj.CalculateFactorial(iValue);

        System.out.println("Factorial is : " + lRet);

        sobj.close();

        // important

        sobj = null;
        nobj = null;

        System.gc();

    }
}