import java.util.Scanner;

class Logic
{
    void EfficientBubbleSort(int Brr[])
    {
        int i = 0, j = 0;
        int temp = 0;

        for(i = 0; i < Brr.length - 1; i++)
        {
            boolean bSwap = false;
            for(j = 0; j < (Brr.length - i - 1); j++)
            {
                if(Brr[j+1] < Brr[j])
                {
                    bSwap = true;
                    temp = Brr[j];
                    Brr[j] = Brr[j+1];
                    Brr[j+1] = temp;
                }
            }

            if(bSwap == false)
            {
                break;
            }
        }
    }
}

class EfficientBubbleSortX 
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

        lobj.EfficientBubbleSort(Arr);

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            System.out.print(Arr[iCnt] + "\t");
        }
        System.out.println();

        sobj.close();
    }   
}
