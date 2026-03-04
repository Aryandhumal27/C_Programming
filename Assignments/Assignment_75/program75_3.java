// 3. A warehouse has a product in stock. Every time a customer places an order, the system must check if enough
// stock exists.
// If possible, fulfill it and update remaining stock. If stock becomes very low, show alert.

// Rules:
// • If requested quantity > available stock → order fails
// • Else deduct quantity
// • If remaining stock < 5 → print low stock alert

// Input:
// • Current stock (integer)
// • Requested quantity (integer)

// Validations:
// • Stock cannot be negative
// • Requested quantity must be > 0

// Expected Output:
// If successful:
// Order Processed Successfully.
// Remaining Stock: <value>
// If remaining < 5 also print: Low Stock Alert!
// If failed: Order Failed: Insufficient Stock.

import java.util.Scanner;

class program75_3 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Current Stock : ");
        int CurrentStock = sobj.nextInt();

        System.out.println("Enter Requested Quantity : ");
        int RequestedQuanlity = sobj.nextInt();

        if(CurrentStock < 0 || RequestedQuanlity <= 0)
        {
            System.out.println("Invalid Input");
            sobj.close();
            return;
        } 

        if(RequestedQuanlity > CurrentStock)
        {
            System.out.println("Order fails");
            System.out.println("Reason : Unsufficient stock");
            System.out.println("Available stock is : " + CurrentStock);
            sobj.close();
            return;
        }
        else
        {
            System.out.println("Order Processed Successfully");
            CurrentStock = CurrentStock - RequestedQuanlity;
            System.out.println("Remaining Stock: " + CurrentStock);
            System.out.println((CurrentStock < 5) ? "Low Stock Alert!" : "");
        }

        sobj.close();
    }
    
}
