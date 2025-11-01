// 1. Write a program to check whether a number is prime or not.

class Logic
{
    void checkPrime(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 2; iCnt <= (iNo / 2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                System.out.println(iNo + " is not a prime number.");
                return;
            }
        }
        System.out.println(iNo + " is prime number.");

    }
}

class program18_1 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.checkPrime(11);
    }
    
}
