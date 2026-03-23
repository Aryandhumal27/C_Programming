// 4. Write a program which accept matrix and display addition of elements From each
// column.

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

// Output : 18  18  15  21
// int MaxDiagonal(int Arr[][], int iRow, int iCol, int iNo)
// {
//      Logic
// }

import java.util.Scanner;

class Logic
{
    void AddColumn(int Brr[][], int iRow, int iCol)
    {
        int i = 0, j = 0;
        int iSum = 0;

        for(i = 0; i < iCol; i++)
        {
            iSum = 0;
            for(j = 0; j < iRow; j++)
            {
                iSum = iSum + Brr[j][i];
            }
            System.out.print(iSum + "\t");
        } 
    }
}

class program72_4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Arr[][] = null;
        int iRow = 0, iCol = 0;
        int i = 0, j = 0;

        System.out.println("Enter the number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter the number of cols : ");
        iCol = sobj.nextInt();

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

        lobj.AddColumn(Arr, iRow, iCol);

        sobj.close();
    }
}