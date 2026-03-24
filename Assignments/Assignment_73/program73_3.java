// 3. Write a program which accept matrix and reverse the contents of each
// column.
// Input :

    // ---------------------------------
    // | 3     | 2     | 5     | 9     |
    // ---------------------------------
    // | 4     | 3     | 2     | 2     |
    // ---------------------------------
    // | 8     | 4     | 1     | 9     |
    // ---------------------------------
    // | 3     | 9     | 7     | 5     |
    // ---------------------------------

// Output :

    // ---------------------------------
    // | 3     | 9     | 7     | 5     |
    // ---------------------------------
    // | 8     | 4     | 1     | 9     |
    // ---------------------------------
    // | 4     | 3     | 2     | 2     |
    // ---------------------------------
    // | 3     | 2     | 5     | 9     |
    // ---------------------------------

// void ReverseCol(int Arr[][], int iRow, int iCol)
// {
//     Logic
// }

import java.util.Scanner;

class Logic
{
    void ReverseCol(int Brr[][], int iRow, int iCol)
    {
        int i = 0, j = 0;

        for(j = 0; j < iCol; j++)
        {
            for(i = 0; i < iRow; i++)
            {
                if(i <= ((iRow/2) - 1))
                {
                    int temp = Brr[i][j];
                    Brr[i][j] = Brr[iRow - 1 - i][j];
                    Brr[iRow - 1 - i][j] = temp;
                }
            }
        }
    }
}

class program73_3
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

        for(i = 0; i < iRow; i++)
        {
            System.out.println("Enter the elements of "+ (i+1) + " Row : ");
            for(j = 0; j < iCol; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }

        System.out.println("Matrix Are : ");
        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }

        Logic lobj = new Logic();

        lobj.ReverseCol(Arr, iRow, iCol);

        System.out.println("Updated Matrix : ");
        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }

        sobj.close();
    }
}