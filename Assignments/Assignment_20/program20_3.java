// 3. Write a program to check whether a number is a perfect number or not.

class Logic
{
    void checkPerfect(int iNo)
    {
        int iCnt = 0;
        int iFactSum = 0;

        for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                iFactSum = iFactSum + iCnt;
            }
        }
        if(iFactSum == iNo)
        {
            System.out.println(iNo + " is a perfect number");
        }
        else
        {
            System.out.println(iNo + " is not a perfect number");
        }
    }
}

class program20_3
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.checkPerfect(6); 
    }  
}