import java.util.Scanner;

class Digit {
    public void DisplayDigit(int iNo) 
    {
        int iDigit = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while (iNo > 0) {
            iDigit = iDigit % 10;
            System.out.println(iDigit);
            iNo = iNo/10;
            
        }
    }
} // End of Number class

class program90 {
    public static void main(String args[]) {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        Digit dobj = new Digit();
        dobj.DisplayDigit(iValue);

        sobj.close();

        // important

        sobj = null;
        dobj = null;

        System.gc();

    }
}