// 4.Write a program to reverse a number.

class Logic
{
    void reverseNumber(int iNo)
    {
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            System.out.print(iDigit);
            iNo = iNo / 10;
        }
    }
}

class program16_4
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.reverseNumber(1234);
    }
}