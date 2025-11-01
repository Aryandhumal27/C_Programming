// 5. Write a program to calculate the power of a number using loops.

class Logic
{
    void calculatePower(int base, int exp)
    {
        int iCnt = 0;
        int iResult = 0;

        for(iCnt = 1, iResult = 1; iCnt <= exp; iCnt++)
        {
            iResult = iResult * base;
        }
        System.out.println("Power of a number " + base + "^" + exp + " is : " + iResult);
    }

}

class program19_5
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.calculatePower(2, 5);
    }
}