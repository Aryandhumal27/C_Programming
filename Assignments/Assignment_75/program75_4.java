// 4. A traffic police app records whether a rider violated rules. Each violation has a fixed fine.
// If multiple violations happen, fines should be added.

// Fines:
// • No helmet → ₹500
// • No license → ₹1000
// • Overspeeding → ₹1500

// Input:
// • Helmet worn (Yes/No)
// • License available (Yes/No)
// • Overspeeding (Yes/No)

// Validations:
// • Inputs must be Yes/No only

// Expected Output:
// Total Fine Amount: ₹<amount>

import java.util.*;

class program75_4 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int TotalFine = 0;

        System.out.println("Helmet Worn (Yes/No) : ");
        String Helmet = sobj.next();

        System.out.println("License available (Yes/No) : ");
        String License = sobj.next();

        System.out.println("Overspeeding (Yes/No) : ");
        String Overspeeding = sobj.next();

        if(Helmet.equalsIgnoreCase("No"))
        {
            TotalFine = TotalFine + 500;
        }

        if(License.equalsIgnoreCase("No"))
        {
            TotalFine = TotalFine + 1000;
        }

        if(Overspeeding.equalsIgnoreCase("Yes"))
        {
            TotalFine = TotalFine + 1500;
        }

        System.out.println("Total Fine Amount : " + TotalFine);

        sobj.close();
    }
    
}
