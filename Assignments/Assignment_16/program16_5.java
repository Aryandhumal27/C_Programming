/*
    5.Write a program to count the number of digits in a given number. 
*/

class Logic
{
    void countDigits(int iNo)
    {
        int iFrequency = 0;

        while(iNo != 0)
        {
            iFrequency++;
            iNo = iNo / 10;
        }
        System.out.println("Frequecy of Digit in number is : " + iFrequency);
    }
}
class program16_5
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.countDigits(7865);

    }
}