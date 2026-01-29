/*
    2. Write java program to accept file name from user and check 
       whether that file is regular file or not... 
*/

import java.io.File;
import java.util.Scanner;

public class program57_2 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String FileName = new String();

        System.out.println("Enter the file name : ");
        FileName = sobj.nextLine();

        File fobj = new File(FileName);

        if(fobj.isFile())
        {
            System.out.println("It is a regular file");
        }
        else
        {
            System.out.println("It is not a regular file");
        }

        sobj.close();
    }
}
