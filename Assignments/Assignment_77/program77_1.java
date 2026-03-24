// 1. A hospital bill includes consultation + medicine + room charges per day. If insured, insurance covers up to
// ₹50,000 or 70% of bill (whichever is lower). ICU ward costs extra.

// Input: days, wardType(Normal/ICU), medicineBill, consultationFee, insured(Yes/No)

// Output: totalBill, insuranceCover, finalPay

// Validations: all non-negative, wardType valid

import java.util.Scanner;

class hospital
{
    float totalBill(int days, String wardType, float medicineBill, float consultationFee)
    {
        float TotalBill = 0.0f;
        int RoomChargesPerDay = 0;

        if(wardType.equalsIgnoreCase("Normal"))
        {
            RoomChargesPerDay = 1500;
        }
        else if(wardType.equalsIgnoreCase("ICU"))
        {
            RoomChargesPerDay = 5000;
        }

        TotalBill = (RoomChargesPerDay * days) + medicineBill + consultationFee;

        return TotalBill;
    }

    float AppliedInsuranceAmount(int days, String wardType, float medicineBill, float consultationFee, String insured)
    {
        float TotalBill = totalBill(days, wardType, medicineBill, consultationFee);
        float InsuredAmt = 0, Insuredby70;


        if(insured.equalsIgnoreCase("No"))
        {
            return InsuredAmt;
        }

        Insuredby70 = (float)(TotalBill * 0.7);

        if(Insuredby70 < 50000)
        {
            InsuredAmt = Insuredby70;
        }
        else
        {
            InsuredAmt = 50000;
        }

        return InsuredAmt;
    }

    float hospitalBillingProcess(int days, String wardType, float medicineBill, float consultationFee, String insured)
    {   
        float finalPay = 0.0f;
        float TotalBill = totalBill(days, wardType, medicineBill, consultationFee);
        float InsuredAmt = 0.0f;

        if(insured.equalsIgnoreCase("yes"))
        {
            InsuredAmt = AppliedInsuranceAmount(days, wardType, medicineBill, consultationFee, insured);
        }

        finalPay = TotalBill - InsuredAmt;

        return finalPay;        
    }
}

class program77_1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int days = 0;
        float medicineBill = 0.0f, consultantFee = 0.0f;

        String wardType = new String();
        String insured = new String();

        float totalBill = 0.0f, insuranceCover = 0.0f, finalPay = 0.0f;

        System.out.println("Enter the days : ");
        days = sobj.nextInt();

        if(days < 0)
        {
            System.out.println("Invalid days");
            sobj.close();
            return;
        }

        System.out.println("Enter the wordType(Normal/ICU) : ");
        wardType = sobj.next();

        if(!wardType.equalsIgnoreCase("Normal") && !wardType.equalsIgnoreCase("ICU"))
        {
            System.out.println("Invalid Input");
            sobj.close();
            return;
        }

        System.out.println("Enter Medicine Bill Amount : ");
        medicineBill = sobj.nextFloat();

        if(medicineBill < 0)
        {
            System.out.println("Medicie Bill cant be negative");
            sobj.close();
            return;
        }

        System.out.println("Enter the consultant Fee : ");
        consultantFee = sobj.nextFloat();

        if(consultantFee < 0)
        {
            System.out.println("consultant Fee cant be negative");
            sobj.close();
            return;
        }

        System.out.println("Having Insurance or not?(Yes/No) : ");
        insured = sobj.next();

        if(!insured.equalsIgnoreCase("yes") && !insured.equalsIgnoreCase("No"))
        {
            System.out.println("Invalid Input");
            sobj.close();
            return;
        }

        hospital hobj = new hospital();

        totalBill = hobj.totalBill(days, wardType, medicineBill, consultantFee);
        insuranceCover = hobj.AppliedInsuranceAmount(days, wardType, medicineBill, consultantFee, insured);
        finalPay = hobj.hospitalBillingProcess(days, wardType, medicineBill, consultantFee, insured);

        System.out.println("Total Bill : " + totalBill);
        System.out.println("Insurance Covered : " + insuranceCover);
        System.out.println("Final payable amount is : " + finalPay);

        sobj.close();
    }
}

