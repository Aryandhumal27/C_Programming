// 4. Write a program to find the sum of even and odd digits separately in a number. 

class Logic
{
    void sumEvenOddDigits(int iNo)
    {
        int iDigit = 0;
        int iSum = 0;
        int iOdd = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if((iDigit % 2) == 0)
            {
                iSum = iSum + iDigit;
            }
            else
            {
                iOdd = iOdd + iDigit;
            }
            iNo = iNo / 10;
        }
        System.out.println("Sum of Even Digits is : " + iSum);
        System.out.println("Sum of Odd Digits is : " + iOdd);
    }
}
class program18_4
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.sumEvenOddDigits(123456);
    }
}