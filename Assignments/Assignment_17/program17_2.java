/*
    2. Write a program to check whether a number is a palindrome or not.
*/

class Logic
{
    void checkPalindrome(int iNo)
    {
        int iOriginal = iNo;
        int iDigit = 0;
        int iRevDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iRevDigit = (iRevDigit * 10) + iDigit;
            System.out.println(iRevDigit);
            iNo = iNo / 10;
        }
        if(iOriginal == iRevDigit)
        {
            System.out.println(iOriginal + " is palindrome number");
        }
        else
        {
            System.out.println(iOriginal + " is not a palindrome number");
        }

    }
}

class program17_2
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkPalindrome(121);
    }
}