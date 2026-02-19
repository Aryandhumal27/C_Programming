import java.util.Scanner;

class Logic
{
    void InsertionSort(int Brr[])
    {
        int i = 0;
        int curr = 0;
        int prev = 0;

        for(i = 1; i < Brr.length; i++)
        {
            curr = Brr[i];
            prev = i - 1;

            while(prev >= 0 && Brr[prev] > curr)
            {
                Brr[prev + 1] = Brr[prev];
                prev--;
            }

            Brr[prev + 1] = curr;
        }
    }
}

class InsertionSortX 
{
    public static void main(String A[])
    {
        int iSize = 0, iCnt = 0;
        int Arr[] = null;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Size : ");
        iSize = sobj.nextInt();

        Arr = new int[iSize];

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            System.out.println("Enter the "+(iCnt+1)+" element : ");
            Arr[iCnt] = sobj.nextInt();
        }

        Logic lobj = new Logic();

        lobj.InsertionSort(Arr);

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            System.out.print(Arr[iCnt] + "\t");
        }
        System.out.println();

        sobj.close();
    }   
}
