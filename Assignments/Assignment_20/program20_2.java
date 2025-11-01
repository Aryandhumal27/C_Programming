// 2. Write a program to print numbers from N down to 1 in reverse order. 

class Logic
{
    void printReverse(int iNo)
    {
        int iCnt = 0;

        for(iCnt = iNo; iCnt >= 1; iCnt--)
        {
            System.out.print(iCnt + " ");
        }
    }
}

class program20_2
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.printReverse(10);
    }
}