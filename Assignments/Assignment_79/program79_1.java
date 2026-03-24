// 1. Design a Java application that analyzes student performance using a 2D matrix.
// A college stores marks of students in multiple subjects using a matrix:
// • Rows represent students.
// • Columns represent subjects.
// Your program must analyze academic performance based on this matrix.

// Requirements:
// Your program should:
// 1. Calculate total marks of each student.
// 2. Identify the topper (student with highest total).
// 3. Calculate average marks for each subject.
// 4. Print students who failed in any subject (marks < 35).

// Input Format:
// • First line: Integer N (number of students)
// • Second line: Integer M (number of subjects)
// • Next N lines: M integers each (marks of each student)

// Validations:
// • N > 0
// • M > 0
// • Each mark must be between 0 and 100
// If invalid input is found, print:
// Invalid Input

// Output Format:
// Student Totals:
// Student 1: <total>
// Student 2: <total>
// ...
// Topper: Student <index>
// Subject Averages:
// Subject 1: <avg>
// Subject 2: <avg>
// ...
// Students Failed:
// <Student numbers>

// Sample Input:
// 3
// 3
// 80 70 60
// 90 85 88
// 30 40 50
// Sample Output:
// Student Totals:
// Student 1: 210
// Student 2: 263
// Student 3: 120
// Topper: Student 2
// Subject Averages:
// Subject 1: 66.67
// Subject 2: 65.00
// Subject 3: 66.00
// Students Failed:
// Student 3

import java.util.Scanner;

class program79_1
{
    static void CalculateTotal(int Marks[][], int iStudents, int iSubjects)
    {
        int i = 0, j = 0;
        int iSum = 0;
        int HighestScore = Integer.MIN_VALUE;
        int TopperIndex = 0;

        for(i = 0; i < iStudents; i++)
        {
            iSum = 0;

            for(j = 0; j < iSubjects; j++)
            {
                iSum = iSum + Marks[i][j];
            }

            if(iSum > HighestScore)
            {
                HighestScore = iSum;
                TopperIndex = i;
            }

            System.out.println("Student " + (i + 1) + " : " + iSum);
        }

        System.out.println("Topper : Student " + (TopperIndex + 1));
    }

    static void CalculateAverage(int Marks[][], int iStudents, int iSubjects)
    {
        int i = 0, j = 0;
        int iSum = 0;

        for(i = 0; i < iStudents; i++)
        {
            iSum = 0;

            for(j = 0; j < iSubjects; j++)
            {
                iSum = iSum + Marks[i][j];
            }

            System.out.println("Student " + (i + 1) + " : " + (float)(iSum/iSubjects));
        }
    }

    static void FailedStudents(int Marks[][], int iStudents, int iSubjects)
    {
        int i = 0, j = 0;

        for(i = 0; i < iStudents; i++)
        {
            for(j = 0; j < iSubjects; j++)
            {
                if(Marks[i][j] <= 35)
                {
                    System.out.println("Student : " + (i + 1));
                    break;
                }
            }
        }
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int i = 0, j = 0;
        int N = sobj.nextInt();

        if(N < 0)
        {
            System.out.println("Invalid Input");
            sobj.close();
            return;
        }

        int M = sobj.nextInt();

        if(M < 0 && M <= 100)
        {
            System.out.println("Invalid Input");
            sobj.close();
            return;
        }

        int Marks[][] = new int[N][M];

        for(i = 0; i < N; i++)
        {
            for(j = 0; j < M; j++)
            {
                Marks[i][j] = sobj.nextInt();
            }
        }

        System.out.println("Student Totals : ");
        CalculateTotal(Marks, N, M);

        System.out.println("Student Averages : ");
        CalculateAverage(Marks, N, M);

        System.out.println("Student Failed : ");
        FailedStudents(Marks, N, M);

        System.out.println();
        sobj.close();



    }
}