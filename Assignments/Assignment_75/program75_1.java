// 1. A shopping mall parking gate records entry and exit duration in hours.
// The parking system calculates charges based on the total hours a vehicle stayed. Long-duration parking attracts
// additional penalty.

// Rules:
// • First 2 hours → ₹20 (flat)
// • After 2 hours → ₹10 per extra hour
// • If total hours > 10 → add ₹50 penalty

// Input:
// • Total parking hours (integer)

// Validations:
// • Hours cannot be negative

// Expected Output:
// Total Parking Duration: <hours> hours
// Total Parking Fee: ₹<amount>

import java.util.*;

class program75_1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int ParkingHrs = 0;
        int ParkingFee = 0;

        System.out.println("Enter the total parking hours : ");
        ParkingHrs = sobj.nextInt();

        if(ParkingHrs < 0)
        {
            System.out.println("Invalid Input");
            return;
        }

        if(ParkingHrs <= 2)
        {
            ParkingFee = ParkingHrs * 20;
        }
        else if(ParkingHrs > 2 && ParkingHrs <= 10)
        {
            ParkingFee = (2 * 20) + ((ParkingHrs - 2) * 10);
        }
        else if(ParkingHrs > 10)
        {
            ParkingFee = (2 * 20) + ((ParkingHrs - 2) * 10) + 50;
        }

        System.out.println("Total Parking Duration : " + ParkingHrs + " hours");
        System.out.println("Total Parking Fee : " + ParkingFee);

        sobj.close();
    }
}