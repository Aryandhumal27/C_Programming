// 5. Write a program which accept matrix and check whether the matrix is
// Sparse matrix or not.
// Sparse matrix is a matrix with the majority of its elements equal to zero.

// Input :

    // ---------------------------------
    // | 1     | 0     | 3     | 0     |
    // ---------------------------------
    // | 0     | 6     | 0     | 0     |
    // ---------------------------------
    // | 0     | 0     | 1     | 0     |
    // ---------------------------------
    // | 9     | 0     | 0     | 9     |
    // ---------------------------------

// Output :

    // True

// boolean ChkSparse(int Arr[][], int iRow, int iCol)
// {
//     Logic
// }

import java.util.Scanner;

class Logic
{
    boolean ChkSparse(int Brr[][], int iRow, int iCol)
    {
        int i = 0, j = 0;
        int iZeroCount = 0;
        boolean bFlag = false;

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                if(Brr[i][j] == 0)
                {
                    iZeroCount++;
                }  
            }

            if(iZeroCount > ((iRow * iCol) / 2))
            {
                bFlag = true;
                break;
            }
        }

        return bFlag;
    }
}

class program73_5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Arr[][] = null;
        int iRow = 0, iCol = 0;
        int i = 0, j = 0;
        boolean bRet = false;

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

        bRet = lobj.ChkSparse(Arr, iRow, iCol);

        if(bRet == true)
        {
            System.out.println("It is Sparse Matrix");
        }
        else
        {
            System.out.println("It is not a Sparse Matrix");
        }
        

        sobj.close();
    }
}