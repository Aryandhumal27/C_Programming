// 5. A telecom company bills calls based on duration slabs. 
// The system needs to calculate final charge for a given call duration.
// Rules:
// • First 5 minutes free
// • Next 10 minutes (6–15) → ₹1 per minute
// • Beyond 15 → ₹2 per minute
// Input:
// • Call duration in minutes (integer)
// Validations:
// • Minutes must be ≥ 0
// Expected Output:
// Call Duration: <minutes> minutes
// Total Call Charge: ₹<amount>

import java.util.Scanner;

class program78_4 
{
    static int CalculateFinalCharge(int CallDuration)
    {
        int FinalCharges = 0;

        if(CallDuration <= 5)
        {
            FinalCharges = 0;
        }
        else if(CallDuration > 5 && CallDuration <= 15)
        {
            FinalCharges = FinalCharges + ((CallDuration - 5) * 1);
        }
        else if(CallDuration > 15)
        {
            FinalCharges = FinalCharges + ((15 - 5) * 1) + ((CallDuration - 15) * 2);
        }

        return FinalCharges;
    }
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the call duration in minutes : ");
        int CallDuration = sobj.nextInt();

        if(CallDuration < 0)
        {
            System.out.println("Invalid Input");
            sobj.close();
            return;
        }

        int iRet = CalculateFinalCharge(CallDuration);

        System.out.println("Call Duration : " + CallDuration + " minutes");
        System.out.println("Total Call Charge : " + iRet);

        sobj.close();
    }
    
}
