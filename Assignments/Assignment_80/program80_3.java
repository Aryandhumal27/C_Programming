// 3. Design a Java application to simulate a warehouse robot moving inside a grid.
// The warehouse is represented as a matrix:
// • 0 → Free space
// • -1 → Obstacle
// Robot starts at position (0,0) and must reach (R-1,C-1).
// Robot can only move:
// • Right
// • Down
// Requirements:
// 1. Determine if a valid path exists.
// 2. If exists, print "Path Available".
// 3. Otherwise print "No Path Found".
// Input Format:
// • First line: Integer R
// • Second line: Integer C
// • Next R lines: C integers (0 or -1)

// Validations:
// • R > 0
// • C > 0
// • Matrix values must be 0 or -1

// Sample Input:
// 3
// 3
// 0 0 0
// -1 0 -1
// 0 0 0
// Sample Output:
// Path Available

import java.util.Scanner;

class program80_3 
{   
    static boolean isPathAvailable(int Path[][], int R, int C)
    {
        // If start or end is blocked
        if(Path[0][0] == -1 || Path[R-1][C-1] == -1)
        {
            return false;
        }

        boolean dp[][] = new boolean[R][C];

        dp[0][0] = true;

        // First column
        for(int i = 1; i < R; i++)
        {
            if(Path[i][0] == 0 && dp[i-1][0])
            {
                dp[i][0] = true;
            }
        }

        // First row
        for(int j = 1; j < C; j++)
        {
            if(Path[0][j] == 0 && dp[0][j-1])
            {
                dp[0][j] = true;
            }
        }

        // Fill remaining cells
        for(int i = 1; i < R; i++)
        {
            for(int j = 1; j < C; j++)
            {
                if(Path[i][j] == 0)
                {
                    dp[i][j] = dp[i-1][j] || dp[i][j-1];
                }
            }
        }

        return dp[R-1][C-1];
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int R = sobj.nextInt();
        if(R <= 0)
        {
            System.out.println("Invalid Input");
            sobj.close();
            return;
        }

        int C = sobj.nextInt();
        if(C <= 0)
        {
            System.out.println("Invalid Input");
            sobj.close();
            return;
        }

        int Path[][] = new int[R][C];

        for(int i = 0; i < R; i++)
        {
            for(int j = 0; j < C; j++)
            {
                Path[i][j] = sobj.nextInt();

                if(Path[i][j] != 0 && Path[i][j] != -1)
                {
                    System.out.println("Invalid Input");
                    sobj.close();
                    return;
                }
            }
        }

        boolean bRet = isPathAvailable(Path, R, C);

        if(bRet)
        {
            System.out.println("Path Available");
        }
        else
        {
            System.out.println("No Path Found");
        }

        sobj.close();
    }
}