// 1. Write a program to find the sum of all even numbers up to N

class Logic
{
    void sumEvenNumbers(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 2; iCnt <= iNo; iCnt = iCnt + 2)
        {
            iSum = iSum + iCnt;
        }
        System.out.println("Sum of all even numbers upto " + iNo + " is : " + iSum);

    }
}

class program20_1
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.sumEvenNumbers(10);
    }
}