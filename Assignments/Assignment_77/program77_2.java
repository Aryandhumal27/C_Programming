// 2. Base fare depends on distance slabs. Add charges for class (Sleeper/3AC/2AC). If booking within 24 hours, add
// Tatkal 30%. Senior citizen gets 40% discount.

// Input: distance, classType, bookingHoursBefore, age

// Output: finalFare + reason breakdown

import java.util.Scanner;

class train
{
    float BillingProcess(int distance, String classType, int bookingHoursBefore, int age)
    {
        float BaseFare = distance * 4;
        float finalFare = 0.0f;

        if(classType.equalsIgnoreCase("sleeper"))
        {
            finalFare = BaseFare;
        }
        else if(classType.equalsIgnoreCase("3AC"))
        {
            finalFare = BaseFare + (distance * 2) + 40;
        }
        else if(classType.equalsIgnoreCase("2AC"))
        {
            finalFare = BaseFare + (distance * 3) + 50;
        }

        if(bookingHoursBefore <= 24)
        {
            finalFare = finalFare + (float)(finalFare * 0.3);
        }

        if(age > 60)
        {
            finalFare = finalFare - (float)(finalFare * 0.4);
        }

        return finalFare;
    }

    void reasonBreakdown(int distance, String classType, int bookingHoursBefore, int age)
    {
        float BaseFare = distance * 4;
        float TotalBill = 0.0f;
        float classCharges = 0.0f;
        float SeniorCitizenDiscount = 0.0f;
        float TatkalCharges = 0.0f;

        System.out.println("Base price for ticket is : " + BaseFare);

        if(classType.equalsIgnoreCase("sleeper"))
        {
            classCharges = 0;
        }
        else if(classType.equalsIgnoreCase("3AC"))
        {
            classCharges = (distance * 2) + 40;
        }
        else if(classType.equalsIgnoreCase("2AC"))
        {
            classCharges = (distance * 3) + 50;
        }

        System.out.println("Class Charges are : " + classCharges);

        TotalBill = BaseFare + classCharges;

        if(bookingHoursBefore <= 24)
        {
            TatkalCharges = (float)(TotalBill * 0.3);
            System.out.println("Tatkal Charges are : " + TatkalCharges);
        }

        TotalBill = TotalBill + TatkalCharges;

        if(age > 60)
        {
            SeniorCitizenDiscount = (float)(TotalBill * 0.4);
            System.out.println("Senior Citizen Discount are : "+ SeniorCitizenDiscount);
        } 
    }
}
class program77_2 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int distance = 0;
        int bookingHoursBefore = 0;
        int age = 0;

        float finalFare = 0.0f;

        String classType = new String();

        System.out.println("Enter the distance : ");
        distance = sobj.nextInt();

        System.out.println("Enter the class type (Sleeper/3AC/2AC) : ");
        classType = sobj.next();

        System.out.println("Enter the booking hrs before train time : ");
        bookingHoursBefore = sobj.nextInt();

        System.out.println("Enter the age : ");
        age = sobj.nextInt();

        train tobj = new train();

        finalFare = tobj.BillingProcess(distance, classType, bookingHoursBefore, age);

        System.out.println("Total Charges of ticket : " + finalFare);

        System.out.println("Reason Breakdown : ");
        tobj.reasonBreakdown(distance, classType, bookingHoursBefore, age);

        sobj.close();
    }
}
