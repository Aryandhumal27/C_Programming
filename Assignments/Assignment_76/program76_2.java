// 2. A scholarship committee uses a strict checklist. Only students who meet all academic 
// and financial conditions qualify.

// Conditions:
// • Marks ≥ 80%
// • Attendance ≥ 75%
// • Family income ≤ ₹3,00,000

// Input:
// • Marks percent (integer)
// • Attendance percent (integer)
// • Family income (integer)

// Validations:
// • Marks and attendance must be 0–100
// • Income cannot be negative

// Expected Output:
// Scholarship Approved
// OR
// Scholarship Rejected: <Reason>

import java.util.*;

class program76_2 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Marks in percentage (0 - 100) : ");
        int Marks = sobj.nextInt();

        System.out.println("Enter Attendance in percentage (0 - 100) : ");
        int Attendance = sobj.nextInt();

        if((Marks < 0 || Marks > 100) || (Attendance < 0 || Attendance > 100))
        {
            System.out.println("Invalid Input");
            System.out.println("Marks and attendance must be 0 - 100");
            sobj.close();
            return;
        }

        System.out.println("Enter Family Annual Income : ");
        int FamilyIncome = sobj.nextInt();

        if(FamilyIncome < 0)
        {
            System.out.println("Invalid Input");
            System.out.println("Income cannot be negative");
            sobj.close();
            return;
        }

        if(Marks < 80)
        {
            System.out.println("Scholarship Rejected : Marks less than 80 percentage");
            sobj.close();
            return;
        }
        else if(Attendance < 75)
        {
            System.out.println("Scholarship Rejected : Attendance less than 75 percentage");
            sobj.close();
            return;
        }
        else if(FamilyIncome > 300000)
        {
            System.out.println("Scholarship Rejected : Family Income is more than 300000");
            sobj.close();
            return;
        }
        else
        {
            System.out.println("Scholarship Approved");
        }

        sobj.close();
    }
}
