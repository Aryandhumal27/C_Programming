// 2. An online election system stores votes by voter ID. Every voter can vote only once. If the same ID appears again,
// the vote must be rejected and counted as duplicate.
// Input:
// • Number of votes N
// • N voter IDs
// Validations:
// • N ≥ 0
// • IDs must be non-negative integers
// Expected Output:
// Valid Votes: <count>
// Rejected Duplicate Votes: <count>

import java.util.Scanner;

class program78_2 
{
    static int CountDuplicate(int VoterIDs[])
    {
        int i = 0, j = 0;
        int iCount = 0;

        for(i = 0; i < VoterIDs.length; i++)
        {
            for(j = i + 1; j < VoterIDs.length; j++)
            {
                if(VoterIDs[i] == VoterIDs[j])
                {
                    iCount++;
                    break;
                }
            }
        }

        return iCount;
    }

    static int ValidVotes(int VoterIDs[])
    {
        int ValidVotes = 0;
        int DuplicateVotes = CountDuplicate(VoterIDs);

        ValidVotes = VoterIDs.length - DuplicateVotes;

        return ValidVotes;
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of votes : ");
        int n = sobj.nextInt();

        int Votes[] = new int[n];

        System.out.println("Enter the Voter IDs : ");
        for(int i = 0; i < Votes.length; i++)
        {
            Votes[i] = sobj.nextInt();
        }

        System.out.println("Valid Votes : " + ValidVotes(Votes));
        System.out.println("Rejected Duplicate Votes : " + CountDuplicate(Votes));

        sobj.close();
    }
    
}
