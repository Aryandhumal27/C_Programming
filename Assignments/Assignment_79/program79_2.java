// 2. Design a Java application to manage cinema hall seating using a 2D array.
// The cinema hall has:
// • Rows representing seat rows
// • Columns representing seats in each row
// Each seat is represented as:
// • 0 → Empty
// • 1 → Booked

// Requirements:
// Your program must:
// 1. Count total booked seats.
// 2. Find row with maximum bookings.
// 3. Check if any row is completely full.
// 4. Display seat matrix.

// Input Format:
// • First line: Integer R (rows)
// • Second line: Integer C (columns)
// • Next R lines: C integers (0 or 1)

// Validations:
// • R > 0
// • C > 0
// • Matrix values must be 0 or 1 only

// Output Format:
// Total Booked Seats: <count>
// Row With Maximum Bookings: Row <number>
// Full Row Exists: Yes/No

// Sample Input:
// 3
// 4
// 1 0 1 1
// 1 1 1 1
// 0 0 1 0
// Sample Output:
// Total Booked Seats: 8
// Row With Maximum Bookings: Row 2
// Full Row Exists: Yes

import java.util.Scanner;

class program79_2 
{
    static void Logic(int seats[][], int iRow, int iCol)
    {
        int i = 0, j = 0;
        int BookedSeats = 0;
        int MaxBooking = Integer.MIN_VALUE;
        int BookedSeatPerRow = 0;
        int MaxRow = 0;
        boolean FullRow = false;


        for(i = 0; i < iRow; i++)
        {
            BookedSeatPerRow = 0;
            
            for(j = 0; j < iCol; j++)
            {
                if(seats[i][j] == 1)
                {
                    BookedSeats++;
                    BookedSeatPerRow++;
                }
            }

            if(BookedSeatPerRow > MaxBooking)
            {
                MaxBooking = BookedSeatPerRow;
                MaxRow = i;
            }

            if(BookedSeatPerRow == iCol)
            {
                FullRow = true;
            }
        }

        System.out.println("Total Booked Seats : " + BookedSeats);
        System.out.println("Row with Maximum Booking : Row " + (MaxRow + 1));

        if(FullRow)
        {
            System.out.println("Full Row Exists : Yes");
        }
        else
        {
            System.out.println("Full Row Exists : No");
        }
    }

    public static void main()
    {
        Scanner sobj = new Scanner(System.in);

        int i = 0, j = 0;

        int R = sobj.nextInt();
        if(R < 0)
        {
            System.out.println("Invalid Input");
            sobj.close();
            return;
        }

        int C = sobj.nextInt();
        if(C < 0)
        {
            System.out.println("Invalid Input");
            sobj.close();
            return;
        }

        int seats[][] = new int[R][C];
        for(i = 0; i < R; i++)
        {
            for(j = 0; j < C; j++)
            {
                seats[i][j] = sobj.nextInt();
                if(seats[i][j] != 0 && seats[i][j] != 1)
                {
                    System.out.println("Invalid Input");
                    sobj.close();
                    return;
                }
            }
        }

        Logic(seats, R, C);

        sobj.close();

    }
}
