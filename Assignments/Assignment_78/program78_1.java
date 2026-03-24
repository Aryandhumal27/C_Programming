// 1. A hotel charges ₹3000 per day. For long stays, hotel provides discount to retain customers.
// Rules:
// • ₹3000/day
// • If stay > 7 days → 5% discount on total bill
// Input:
// • Number of days stayed
// Validations:
// • Days must be ≥ 0
// Expected Output:
// Total Stay Duration: <days> days
// Final Bill Amount: ₹<amount>

import java.util.Scanner;

class hotel
{
    float GenerateBill(int days)
    {
        float BillAmt = 0.0f;

        BillAmt = days * 3000;

        if(days > 7)
        {
            BillAmt = BillAmt - (float)(BillAmt * 0.05);
        }

        return BillAmt;
    }
}
class program78_1 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of days : ");
        int days = sobj.nextInt();

        if(days < 0)
        {
            System.out.println("Invalid Input");
            sobj.close();
            return;
        }

        hotel hobj = new hotel();

        System.out.println("Total Stay Duration : " + days + " days");
        System.out.println("Final Bill Amount : Rs " + hobj.GenerateBill(days));

        sobj.close();
    }
    
}
