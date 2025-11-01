/*
    3. Write a program to find the maximum of two number.
*/

class Logic
{
    void findMax(int iNo1, int iNo2)
    {
        if(iNo1 > iNo2)
        {
            System.out.println(iNo1 + " is Maximum.");
        }
        else
        {
            System.out.println(iNo2 + " is Maximum.");
        }
    }
}

class program17_3
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.findMax(20, 15);
    }
}