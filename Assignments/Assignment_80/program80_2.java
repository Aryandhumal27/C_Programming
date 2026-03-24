// 2. Design a Java program to determine whether a given square matrix is a Magic Square.
// A Magic Square is defined as:
// • All row sums are equal.
// • All column sums are equal.
// • Both diagonal sums are equal.

// Input Format:
// • First line: Integer N (size of square matrix)
// • Next N lines: N integers each

// Validations:
// • N > 0
// • Matrix must be square

// Output Format:
// Matrix is a Magic Square
// OR
// Matrix is NOT a Magic Square
import java.util.Scanner;

class program80_2 
{
    static boolean ChkMagicMatrix(int Brr[][], int iSize)
    {
        int i = 0, j = 0;

        int sum = 0;
        for(j = 0; j < iSize; j++)
        {
            sum = sum + Brr[0][j];
        }

        for(i = 0; i < iSize; i++)
        {
            int RowSum = 0;
            for(j = 0; j < iSize; j++)
            {
                RowSum = RowSum + Brr[i][j];
            }

            if(RowSum != sum)
            {
                return false;
            }
        }

        for(j = 0; j < iSize; j++)
        {
            int ColSum = 0;
            for(i = 0; i < iSize; i++)
            {
                ColSum = ColSum + Brr[i][j];
            }

            if(ColSum != sum)
            {
                return false;
            }
        }

        int DiagonalSum1 = 0;
        int DiagonalSum2 = 0;

        for(i = 0; i < iSize; i++)
        {
            DiagonalSum1 = DiagonalSum1 +  Brr[i][i];
            DiagonalSum2 = DiagonalSum2 + Brr[i][iSize - 1 - i];
        }

        if(DiagonalSum1 != sum || DiagonalSum2 != sum)
        {
            return false;
        }

        return true;
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int N = sobj.nextInt();

        if(N <= 0)
        {
            System.out.println("Invalid Input");
            sobj.close();
            return;
        }

        int Arr[][] = new int[N][N];

        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }

        boolean bRet = ChkMagicMatrix(Arr, N);

        if(bRet)
        {
            System.out.println("Matrix is a Magic Square");
        }
        else
        {
            System.out.println("Matrix is NOT a Magic Square");
        }

        sobj.close();
    }
}