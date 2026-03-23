// 3. Write a program which accept matrix and return largest number from both the
// diagonals

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

// Output : 9
// int MaxDiagonal(int Arr[][], int iRow, int iCol, int iNo)
// {
//      Logic
// }

import java.util.Scanner;

class Logic
{
    int MaxDiagonal(int Brr[][], int iRow, int iCol)
    {
        int i = 0, j = 0;
        int iMax = Brr[i][j];

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                if((i == j || j == (iRow - i)) && (Brr[i][j] > iMax))
                {
                    iMax = Brr[i][j];
                }
            }
        }

        return iMax;
    }
}

class program72_3
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

        iRet = lobj.MaxDiagonal(Arr, iRow, iCol);

        System.out.println("Max Diagonal element is : "+ iRet);

        sobj.close();
    }
}