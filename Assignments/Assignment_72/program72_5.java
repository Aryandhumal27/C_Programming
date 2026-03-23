// 5. Write a program which accept matrix and swap the contents of consecutive rows.

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
    // | 4     | 3     | 2     | 2     |
    // ---------------------------------
    // | 3     | 2     | 5     | 9     |
    // ---------------------------------
    // | 3     | 9     | 7     | 5     |
    // ---------------------------------
    // | 8     | 4     | 1     | 9     |
    // ---------------------------------

// void SwapRows(int Arr[][], int iRow, int iCol, int iNo)
// {
//      Logic
// }

import java.util.Scanner;

class Logic
{
    void SwapRows(int Brr[][], int iRow, int iCol)
    {
        int i = 0, j = 0;

        for(i = 0; i < iCol; i = i + 2)
        {
            for(j = 0; j < iRow; j++)
            {
                int temp = Brr[i][j];
                Brr[i][j] = Brr[i+1][j];
                Brr[i+1][j] = temp;   
            }
        } 
    }
}

class program72_5
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

        System.out.println("Elements of matrix are : ");
        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }

        Logic lobj = new Logic();

        lobj.SwapRows(Arr, iRow, iCol);

        System.out.println("Elements of matrix are : ");
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