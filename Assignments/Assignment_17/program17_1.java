/*
    1. Write a program to find the sum of digits of a number.
*/

class Logic
{
    void sumOfDigits(int iNo)
    {
        int iDigit = 0;
        int iSum = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
        System.out.println("Sum of Digits is : " + iSum);
    }
}

class program17_1
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.sumOfDigits(1234);
    }
}