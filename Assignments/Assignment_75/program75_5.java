// 5. A tax portal calculates income tax based on annual income using progressive slabs. Only the amount in a slab is
// taxed at that slab’s rate.

// Slabs:
// • Up to ₹2,50,000 → 0%
// • ₹2,50,001 to ₹5,00,000 → 5%
// • ₹5,00,001 to ₹10,00,000 → 20%
// • Above ₹10,00,000 → 30%

// Input:
// • Annual income (integer)

// Validations:
// • Income cannot be negative

// Expected Output:
// Annual Income: ₹<income>
// Total Tax Payable: ₹<tax>

import java.util.*;

class program75_5 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int AnnualIncome = 0;
        float TaxPayable = 0.0f;

        System.out.println("Enter Annual Income : ");
        AnnualIncome = sobj.nextInt();
        

        if(AnnualIncome < 0)
        {
            System.out.println("Invalid Input : Income cannot be negative");
            sobj.close();
            return;
        }

        if(AnnualIncome <= 250000)
        {
            TaxPayable = TaxPayable + (float)(AnnualIncome * 0.0);
        }
        else if(AnnualIncome <= 500000)
        {
            TaxPayable = TaxPayable + (float)((AnnualIncome - 250000) * 0.05);
        }
        else if(AnnualIncome <= 1000000)
        {
            TaxPayable = TaxPayable + (float)(250000 * 0.05) + (float)((AnnualIncome - 500000) * 0.2);
        }
        else if(AnnualIncome > 1000000)
        {
            TaxPayable = TaxPayable + (float)(250000 * 0.05) + (float)(500000 * 0.2) + (float)((AnnualIncome - 1000000) * 0.3);
        }

        System.out.println("Annual Income : " + AnnualIncome);
        System.out.println("Total Tax Payable : " + TaxPayable);
        
        sobj.close();
    }
}
