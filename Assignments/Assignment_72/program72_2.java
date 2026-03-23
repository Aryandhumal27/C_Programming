// 2. Write a program which accept matrix and one number from user and return
// frequency of that number.

// Input :

    // ---------------------------------
    // | 3     | 2     | 5     | 9     |
    // ---------------------------------
    // | 4     | 3     | 2     | 2     |
    // ---------------------------------
    // | 8     | 4     | 1     | 5     |
    // ---------------------------------
    // | 3     | 9     | 7     | 5     |
    // ---------------------------------

    // Number : 9
// Output : 2
// int CountFrequency(int Arr[][], int iRow, int iCol, int iNo)
// {
//      Logic
// }

import java.util.Scanner;

class Logic
{
    int CountFrequency(int Brr[][], int iRow, int iCol, int iNo)
    {
        int i = 0, j = 0;
        int iFrequecy = 0;

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                if(Brr[i][j] == iNo)
                {
                    iFrequecy = iFrequecy + 1;
                }
            }
        }

        return iFrequecy;
    }
}

class program72_2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Arr[][] = null;
        int iRow = 0, iCol = 0;
        int iValue = 0;
        int i = 0, j = 0;
        int iRet = 0;

        System.out.println("Enter the number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter the number of cols : ");
        iCol = sobj.nextInt();

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        Arr = new int[iRow][iCol]; 

        System.out.println("Enter the elements of matrix : ");
        for(i = 0; i < iRow; i++)
        {
            System.out.println("Enter the elements of " + (i+1) + " Row : ");
            for(j = 0; j < iCol; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }

        Logic lobj = new Logic();

        iRet = lobj.CountFrequency(Arr, iRow, iCol, iValue);

        System.out.println("Frequency of Number : "+ iRet);

        sobj.close();
    }
}