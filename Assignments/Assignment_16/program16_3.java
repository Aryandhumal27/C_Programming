/*
    3. Write a program to find the factorial of a number using a for loop.
*/

class Logic
{
    void findFactorial(int iNo)
    {
        int iFact = 1;
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            iFact = iFact * iCnt;
        }
        System.out.println("Factorial of " + iNo + " is: " + iFact);
    }
}
class program16_3
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.findFactorial(5);
    }
}