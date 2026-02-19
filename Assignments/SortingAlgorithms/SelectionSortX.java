import java.util.Scanner;

class Logic
{
    void SelectionSort(int Brr[])
    {
        int i = 0, j = 0;
        int iMin = 0;
        int temp = 0;

        for(i = 0; i < Brr.length; i++)
        {
            iMin = i;
            for(j = i; j < Brr.length; j++)
            {
                if(Brr[iMin] > Brr[j])
                {
                    iMin = j;
                }
            }

            temp = Brr[i];
            Brr[i] = Brr[iMin];
            Brr[iMin] = temp;
        }
    }
}

class SelectionSortX 
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

        lobj.SelectionSort(Arr);

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            System.out.print(Arr[iCnt] + "\t");
        }
        System.out.println();

        sobj.close();
    }   
}
