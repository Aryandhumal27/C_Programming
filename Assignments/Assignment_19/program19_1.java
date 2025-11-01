// 1. Write a program to check whether a given year is leap yer or not. 

class Logic
{
    void checkLeapYear(int iYear)
    {
        if((((iYear % 4) == 0) || ((iYear % 400) == 0)) && ((iYear % 400) != 0))
        {
            System.out.println(iYear + " is leap year.");
        }
        else
        {
            System.out.println(iYear + " is not a leap year.");
        }
    }
}
class program19_1
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.checkLeapYear(2024);
    }
}