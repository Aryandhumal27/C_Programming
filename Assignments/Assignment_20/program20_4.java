// 4. Write a program to find the largest digit in a given number.

class Logic
{
    void findlargestDigit(int iNo)
    {
        int iDigit = 0;
        int iMax = Integer.MIN_VALUE;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit > iMax)
            {
                iMax = iDigit;
            }
            iNo = iNo / 10;
        }
        System.out.println("Largest digit in a given number is : " + iMax);
    }
}

class program20_4
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.findlargestDigit(83429);
    }
}