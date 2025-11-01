// 3. Write a program to print all odd numbers up to N. 

class Logic
{
    void printOddNumbers(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt = iCnt + 2)
        {
            System.out.print(iCnt + " ");
        }
    }
}
class program18_3
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.printOddNumbers(20);
    }
}