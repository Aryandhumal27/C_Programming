// 4. A customer enters a store with a fixed budget. They pick items one by one in a given order.
// The cashier wants to know how many items can be purchased before money becomes insufficient.

// Input:
// • Budget amount
// • Number of items N
// • N item prices

// Validations:
// • Budget ≥ 0
// • N ≥ 0
// • Each price > 0

// Expected Output:
// Items Purchased: <count>
// Remaining Balance: ₹<amount>

import java.util.*;

class program76_4 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int i = 0, ItemPurchased = 0;

        System.out.println("Enter the Budget Amount : ");
        int BudgetAmt = sobj.nextInt();

        
        System.out.println("Enter the Number of items : ");
        int NumberOfItems = sobj.nextInt();

        if(BudgetAmt < 0 || NumberOfItems < 0)
        {
            System.out.println("Invalid Input");
            sobj.close();
            return;
        }

        int ItemPrices[] = new int[NumberOfItems];

        for(i = 0; i < ItemPrices.length; i++)
        {
            System.out.println("Enter the price of " + (i + 1) + " item : ");
            ItemPrices[i] = sobj.nextInt();

            if(ItemPrices[i] <= 0)
            {
                System.out.println("Invalid Input");
                System.out.println("Price should be greater than 0");
                continue;
            }

            if(BudgetAmt >= ItemPrices[i])
            {
                BudgetAmt = BudgetAmt - ItemPrices[i];
                ItemPurchased++;
            }
            else
            {
                System.out.println("Insufficient Budget");
                break;
            }   
        }

        System.out.println("Item Purchased : " + ItemPurchased);
        System.out.println("Remaining Balance : " + BudgetAmt);

        sobj.close();
    }   
}
