// 5. Write a program to print the multiplication table of a number.

class Logic
{
    void printTable(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= 10; iCnt++)
        {
            System.out.println("5 X " + iCnt + "= " + (5 * iCnt));
        }
    }
}
class program17_5
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.printTable(5);
    }

}
