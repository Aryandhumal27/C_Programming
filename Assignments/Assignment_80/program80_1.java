// 1. Design a Java application to analyze electricity consumption of multiple cities over a week.
// • Rows represent cities.
// • Columns represent 7 days of the week.
// Each cell contains units consumed on that day.

// Requirements:
// Your program must:
// 1. Calculate total weekly consumption for each city.
// 2. Identify city with highest consumption.
// 3. Identify the day with maximum overall consumption.
// 4. Print cities that consumed more than 500 units in a week.

// Input Format:
// • First line: Integer N (number of cities)
// • Next N lines: 7 integers each (units per day)

// Validations:
// • N > 0
// • Units cannot be negative

// Output Format:
// Weekly Consumption:
// City 1: <units>
// City 2: <units>
// ...
// Highest Consumption: City <number>
// Peak Consumption Day: Day <number>

import java.util.Scanner;

class program80_1
{
    static void CountWeeklyConsumption(int Brr[][], int Cities)
    {
        int i = 0, j = 0;
        int WeeklyConsumption = 0;

        System.out.println("Weekly Consumption:");
        for(i = 0; i < Cities; i++)
        {
            WeeklyConsumption = 0;
            for(j = 0; j < 7; j++)
            {
                WeeklyConsumption += Brr[i][j];
            }
            System.out.println("City " + (i + 1) + " : " + WeeklyConsumption);
        }
    }

    static void HighestConsumptionCity(int Brr[][], int Cities)
    {
        int i = 0, j = 0;
        int ConsumptionByCity = 0;
        int HighestCons = Integer.MIN_VALUE;
        int HighestCity = 0;

        for(i = 0; i < Cities; i++)
        {
            ConsumptionByCity = 0;
            for(j = 0; j < 7; j++)
            {
                ConsumptionByCity += Brr[i][j];
            }

            if(ConsumptionByCity > HighestCons)
            {
                HighestCons = ConsumptionByCity;
                HighestCity = i;
            }
        }

        System.out.println("Highest Consumption: City " + (HighestCity + 1));
    }

    static void HighestConsumptionDay(int Brr[][], int Cities)
    {
        int i = 0, j = 0;
        int DayWiseConsumption = 0;
        int HighestCons = Integer.MIN_VALUE;
        int HighestDay = 0;

        for(j = 0; j < 7; j++)
        {
            DayWiseConsumption = 0;
            for(i = 0; i < Cities; i++)
            {
                DayWiseConsumption += Brr[i][j];
            }

            if(DayWiseConsumption > HighestCons)
            {
                HighestCons = DayWiseConsumption;
                HighestDay = j;   
            }
        }

        System.out.println("Peak Consumption Day: Day " + (HighestDay + 1));
    }

    static void MoreThan500Units(int Brr[][], int Cities)
    {
        int i = 0, j = 0;
        int WeeklyConsumption = 0;

        System.out.println("Cities that consumed more than 500 units:");
        for(i = 0; i < Cities; i++)
        {
            WeeklyConsumption = 0;
            for(j = 0; j < 7; j++)
            {
                WeeklyConsumption += Brr[i][j];
            }

            if(WeeklyConsumption > 500)
            {
                System.out.println("City " + (i + 1) + " : " + WeeklyConsumption);
            }
        }
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int i = 0, j = 0;
        int Cities = 0;

        System.out.println("Enter the number of cities : ");
        Cities = sobj.nextInt();

        if(Cities <= 0)   // FIXED (should be <= 0)
        {
            System.out.println("Invalid Input");
            sobj.close();
            return;
        }

        int Arr[][] = new int[Cities][7];

        for(i = 0; i < Cities; i++)
        {
            System.out.println("Enter the weekly units of City " + (i + 1));
            for(j = 0; j < 7; j++)
            {
                Arr[i][j] = sobj.nextInt();

                if(Arr[i][j] < 0)
                {
                    System.out.println("Invalid Input");
                    sobj.close();
                    return;
                }
            }
        }

        CountWeeklyConsumption(Arr, Cities);
        HighestConsumptionCity(Arr, Cities);
        HighestConsumptionDay(Arr, Cities);
        MoreThan500Units(Arr, Cities);

        sobj.close();
    }
}