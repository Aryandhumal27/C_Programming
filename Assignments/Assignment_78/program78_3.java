// 3. A fitness app records steps for 7 days. It wants to show how many days user achieved the goal and what the
// highest step count was.
// Input:
// • 7 integers (steps)
// Validations:
// • Steps must be ≥ 0
// Expected Output:
// Goal Achieved Days: <count>
// Maximum Steps in Week: <value>

import java.util.Scanner;

class program78_3 
{
    static int CountAchieveDays(int Steps[], int Goal)
    {
        int iCount = 0;

        for(int i = 0; i < Steps.length; i++)
        {
            if(Steps[i] >= Goal)
            {
                iCount++;
            }
        }

        return iCount;
    }

    static int MAximumSteps(int Steps[], int Goals)
    {
        int iMax = Steps[0];

        for(int i = 1; i < Steps.length; i++)
        {
            if(Steps[i] > iMax)
            {
                iMax = Steps[i];
            }
        }

        return iMax;
    }
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int StepsEveryDay[] = new int[7];

        System.out.println("Enter the goal : ");
        int Goal = sobj.nextInt();

        if(Goal < 0)
        {
            System.out.println("Invalid Input");
            sobj.close();
            return;
        }

        System.out.println("Enter the step record of 7 days : ");
        for(int i = 0; i < StepsEveryDay.length; i++)
        {
            StepsEveryDay[i] = sobj.nextInt();
            if(StepsEveryDay[i] < 0)
            {
                System.out.println("Invalid Input");
                sobj.close();
                return;
            }
        }

        System.out.println("Goal Achieved Days : " + CountAchieveDays(StepsEveryDay, Goal));
        System.out.println("Maximum Steps in Week : " + MAximumSteps(StepsEveryDay, Goal));

        sobj.close();
    }
    
}
