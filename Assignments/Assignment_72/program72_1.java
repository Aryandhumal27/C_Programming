// 1.Write a program which accept matrix from user and return addition of diagonal elements.

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
// Output : 12
// int AddDiagonal(int Arr[][], int iRow, int iCol)
// {
//      Logic
// }

import java.util.Scanner;

class Logic
{
    int AddDiagonal(int Brr[][], int iRow, int iCol)
    {
        int i = 0, j = 0;
        int iSum = 0;

        
        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                if(i == j)
                {
                    iSum = iSum + Brr[i][j];
                }
            }
        }

        return iSum;
    }
}

class program72_1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Arr[][] = null;
        int iRow = 0, iCol = 0;
        int i = 0, j = 0;
        int iRet = 0;

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

        iRet = lobj.AddDiagonal(Arr, iRow, iCol);

        System.out.println("Addition of diagonal is : "+ iRet);

        sobj.close();
    }
}