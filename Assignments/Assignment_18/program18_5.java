// 5. Write a program to check whether a number is positive, negative, or zero.

class Logic
{
    void checkSign(int iNo)
    {
        System.out.println("Number : " + iNo);

        if(iNo < 0)
        {
            System.out.println("Number is negtive.");
        }
        else if(iNo == 0)
        {
            System.out.println("Number is zero.");
        }
        else
        {
            System.out.println("Number is Positive.");
        }
    }
}
class program18_5
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.checkSign(-8);
    }
}