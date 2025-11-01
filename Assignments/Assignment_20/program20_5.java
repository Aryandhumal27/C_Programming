// 4. Write a program to find the smallest digit in a given number.

class Logic
{
    void findSmallestDigit(int iNo)
    {
        int iDigit = 0;
        int iMax = Integer.MAX_VALUE;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit < iMax)
            {
                iMax = iDigit;
            }
            iNo = iNo / 10;
        }
        System.out.println("Smallest digit in a given number is : " + iMax);
    }
}

class program20_5
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.findSmallestDigit(83429);
    }
}