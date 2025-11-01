// 2. Write a program to print all even numbers up to N. 

class Logic
{
    void printEvenNumbers(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 2; iCnt <= iNo; iCnt = iCnt + 2)
        {
            System.out.print(iCnt + " ");
        }
    }
}
class program18_2
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.printEvenNumbers(20);
    }
}