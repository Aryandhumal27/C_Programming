// 5. A phone OS shows different battery warnings. 
// The user wants a program that prints the correct battery status.

// Rules:
// • Battery ≤ 5% → Critical
// • Battery ≤ 15% → Low
// • Otherwise → Normal

// Input:
// • Battery percentage (integer)

// Validations:
// • 0 to 100 only

// Expected Output:
// Battery Percentage: <value>%
// Status: <Critical/Low/Normal>

import java.util.*;

class program76_5 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int BatteryPercentage = 0;
        String Status = null;

        System.out.println("Enter Battery Percentage : ");
        BatteryPercentage = sobj.nextInt();

        if(BatteryPercentage < 0 || BatteryPercentage > 100)
        {
            System.out.println("Invalid Input");
            sobj.close();
            return;
        }

        if(BatteryPercentage <= 5)
        {
            Status = "Critical";
        }
        else if(BatteryPercentage <= 15)
        {
            Status = "Low";
        }
        else
        {
            Status = "Normal";
        }

        System.out.println("Battery Percentage : " + BatteryPercentage + "%");
        System.out.println("Status : " + Status);

        sobj.close();
    }
}
