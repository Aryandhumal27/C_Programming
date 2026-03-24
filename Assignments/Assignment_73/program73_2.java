// 2. Write a program which accept matrix and reverse the contents of each row.

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
    // | 9     | 5     | 2     | 3     |
    // ---------------------------------
    // | 2     | 2     | 3     | 4     |
    // ---------------------------------
    // | 9     | 1     | 4     | 8     |
    // ---------------------------------
    // | 5     | 7     | 9     | 3     |
    // ---------------------------------

// void ReverseRow(int Arr[][], int iRow, int iCol)
// {
//     Logic
// }

import java.util.Scanner;

class Logic
{
    void ReverseRow(int Brr[][], int iRow, int iCol)
    {
        int i = 0, j = 0;

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                if(j <= ((iCol/2) - 1))
                {
                    int temp = Brr[i][j];
                    Brr[i][j] = Brr[i][iCol - 1 - j];
                    Brr[i][iCol - 1 - j] = temp;
                }
            }
        }
    }
}

class program73_2
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

        lobj.ReverseRow(Arr, iRow, iCol);

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