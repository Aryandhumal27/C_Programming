// 4. Write a program to print each digit of a number separately.

class Logic
{
    void printDigits(int iNo)
    {
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            System.out.println(iDigit + " ");
            iNo = iNo / 10;
        }

    }
}

class program19_4
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.printDigits(9876);
        
    }
}