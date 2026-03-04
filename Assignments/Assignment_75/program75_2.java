// 2. A bank wants to quickly decide whether a customer is eligible for a personal loan.
// The system checks the applicant’s details and either approves the loan or rejects with the exact reason.

// Eligibility Conditions:
// • Age 21 to 60 inclusive
// • Monthly income ≥ ₹25,000
// • Credit score ≥ 700
// • Must NOT have an existing unpaid loan

// Input:
// • Age
// • Monthly income
// • Credit score
// • Existing unpaid loan (Yes/No)

// Validations:
// • Age/income/score must be non-negative
// • Yes/No must be valid

// Expected Output:
// Loan Approved
// OR
// Loan Rejected: <Specific Reason>

import java.util.*;

class program75_2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the age : ");
        int age = sobj.nextInt();

        System.out.println("Enter the monthly Income : ");
        int MonthlyIncome = sobj.nextInt();

        System.out.println("Enter Credit Score : ");
        int CreditScore = sobj.nextInt();

        if(age < 0 || MonthlyIncome < 0 || CreditScore < 0)
        {
            System.out.println("Invalid Input");
            return;
        }

        System.out.println("Existing unpaid loan(Yes/No) : ");
        String isUnpaidLoan = sobj.next();

        if(age >= 21 && age <= 60 && MonthlyIncome >= 25000 && CreditScore >= 700 && isUnpaidLoan.equalsIgnoreCase("no"))
        {
            System.out.println("Loan Approved");
            return;
        }

        if(age < 21 || age > 60)
        {
            System.out.println("Loan Rejected : Invalid Age");
        }

        if(MonthlyIncome < 25000)
        {
            System.out.println("Loan Rejected : Uneffiecient Monthly income");
        }

        if(CreditScore < 700)
        {
            System.out.println("Loan Rejected : less CreditScore");
        }

        if(isUnpaidLoan.equalsIgnoreCase("yes"))
        {
            System.out.println("Loan Rejected : Existing unpaid loan");
        }

        sobj.close();
    }
}