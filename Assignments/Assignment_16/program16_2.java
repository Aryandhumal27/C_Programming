/*
    2. Write a program to check whether a given number is even or odd. 
*/

class Logic
{
    void checkEvenOdd(int iNo)
    {
        if((iNo % 2) == 0)
        {
            System.out.println(iNo + " is Even number");
        }
        else
        {
            System.out.println(iNo + " is Odd number");
        }   
    }
}
class program16_2
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkEvenOdd(7);
    }
}
