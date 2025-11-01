/*
    1.Write a program to calculate the sum of first N natural number.
*/

class Logic
{
    void calculateSum(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            iSum = iSum + iCnt;
        }
        System.out.println("Sum of first " + iNo + " natural numbers is : " + iSum);
    }
}

class program16_1
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.calculateSum(10);
    }
}