// 1. A ride-hailing app calculates trip fare based on distance and whether the trip happened during peak hours.
// Peak hours increase demand, so surcharge applies.

// Rules:
// • Base fare ₹50
// • First 10 km → ₹12 per km
// • Beyond 10 km → ₹15 per km
// • Peak hours → 20% extra on total fare

// Input:
// • Distance in km (integer)
// • Peak hour (Yes/No)

// Validations:
// • Distance cannot be negative

// Expected Output:
// Distance: <km> km
// Peak Hour: <Yes/No>
// Total Fare: ₹<amount>

import java.util.*;

class program76_1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int BaseFare = 50;
        float TotalFare = BaseFare;

        System.out.println("Enter the distance : ");
        int Distance = sobj.nextInt();

        System.out.println("Peak hours : (Yes/No)");
        String PeakHrs = sobj.next();

        if(Distance < 0)
        {
            System.out.println("Invalid Input");
            sobj.close();
            return;
        }

        if(Distance <= 10)
        {
            TotalFare = TotalFare + (Distance * 12);
        }
        else if(Distance > 10)
        {
            TotalFare = TotalFare + (10 * 12) + ((Distance - 10) * 15);
        }

        if(PeakHrs.equalsIgnoreCase("Yes"))
        {
            TotalFare = TotalFare + (float)(TotalFare * 0.2);
        }

        System.out.println("Distance : " + Distance + " km");
        System.out.println("Peak Hour : " + PeakHrs);
        System.out.println("Total Fare : " + TotalFare);

        sobj.close();
    }
}