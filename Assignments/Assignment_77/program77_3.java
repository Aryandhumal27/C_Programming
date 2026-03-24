// 3. User enters usage: calls(min), data(GB), SMS(count). App suggests the cheapest plan among 4 plans.

// Input: mins, gb, sms

// Output: recommendedPlan, totalCost

// Twist: if usage exceeds plan limits, add per-unit extra

import java.util.Scanner;

class RechargePlan
{
    int mins;
    int data;
    int sms;

    int minMins = 500;
    int minData = 5;
    int minSMS = 100;

    float baseCost = 299;

    RechargePlan(int mins, int data, int sms)
    {
        this.mins = mins;
        this.data = data;
        this.sms = sms;
    }

    float CalculateRechargeAmt()
    {
        float RechargeAmt = baseCost;

        int extraMins = 0;
        int extraData = 0;
        int extraSMS = 0;

        if(mins > minMins)
        {
            extraMins = mins - minMins;
        }

        if(data > minData)
        {
            extraData = data - minData;
        }

        if(sms > minSMS)
        {
            extraSMS = sms - minSMS;
        }

        RechargeAmt = RechargeAmt 
                    + (extraMins * 0.5f) 
                    + (extraData * 7) 
                    + (extraSMS * 1);

        return RechargeAmt;
    }
}

class program77_3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter the number of plans: ");
        int n = sobj.nextInt();

        int mins[] = new int[n];
        int data[] = new int[n];
        int sms[] = new int[n];

        System.out.println("Enter call duration (mins):");
        for(int i = 0; i < n; i++)
        {
            mins[i] = sobj.nextInt();
        }

        System.out.println("Enter data (GB):");
        for(int i = 0; i < n; i++)
        {
            data[i] = sobj.nextInt();
        }

        System.out.println("Enter SMS count:");
        for(int i = 0; i < n; i++)
        {
            sms[i] = sobj.nextInt();
        }

        RechargePlan ObjArr[] = new RechargePlan[n];

        for(int i = 0; i < n; i++)
        {
            ObjArr[i] = new RechargePlan(mins[i], data[i], sms[i]);
        }

        float cheapestPlan = ObjArr[0].CalculateRechargeAmt();
        int index = 0;

        for(int i = 1; i < n; i++)
        {
            float cost = ObjArr[i].CalculateRechargeAmt();

            if(cost < cheapestPlan)
            {
                cheapestPlan = cost;
                index = i;
            }
        }
 
        System.out.println("Recommended Plan: Plan " + (index + 1));
        System.out.println("Total Cost: " + cheapestPlan);

        for(int i = 0; i < n; i++)
        {
            float cost = ObjArr[i].CalculateRechargeAmt();

            System.out.println(cost + "\t");
        }
 

        sobj.close();
    }
}