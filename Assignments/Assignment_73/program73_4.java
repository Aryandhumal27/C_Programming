// 4. Write a program which accept matrix and check whether the matrix is
// identity matrix or not.
// Identity matrix is a square matrix with 1’s along the diagonal from upper left to
// lower right and 0’s in all other positions.
// If it satisfies the structure as explained before then the matrix is called as
// identity matrix.
// Input :

    // ---------------------------------
    // | 1     | 0     | 0     | 0     |
    // ---------------------------------
    // | 0     | 1     | 0     | 0     |
    // ---------------------------------
    // | 0     | 0     | 1     | 0     |
    // ---------------------------------
    // | 0     | 0     | 0     | 1     |
    // ---------------------------------

// Output :

    // True

// boolean ChkIdentity(int Arr[][], int iRow, int iCol)
// {
//     Logic
// }

import java.util.Scanner;

class Logic
{
    boolean ChkIdentity(int Brr[][], int iRow, int iCol)
    {
        int i = 0, j = 0;
        boolean bFlag = true;

        if(iRow != iCol)
        {
            return false;
        }

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                if((i == j) && Brr[i][j] != 1)
                {
                    bFlag = false;
                    break;
                }
                else if((i != j) && Brr[i][j] != 0)
                {
                    bFlag = false;
                    break;
                }
            }

            if(bFlag == false)
            {
                break;
            }
        }

        return bFlag;
    }
}

class program73_4
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

        bRet = lobj.ChkIdentity(Arr, iRow, iCol);

        if(bRet == true)
        {
            System.out.println("It is identity Matrix");
        }
        else
        {
            System.out.println("It is not a identity Matrix");
        }
        

        sobj.close();
    }
}