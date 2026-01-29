/*
    Write java program to accept file name from user and open that file.
*/

import java.util.Scanner;
import java.io.File;
import java.io.IOException;

class program56_1
{
    public static void main(String A[])
    {
        Scanner sc = new Scanner(System.in);

        String FileName = new String();

        System.out.println("Enter the file name : ");
        FileName = sc.nextLine();

        File fobj = new File(FileName);

        try 
        {
            fobj.createNewFile();
        } 
        catch (IOException e) 
        {
            // TODO Auto-generated catch block
            System.out.println("Unable to open file");
            e.printStackTrace();
        }

        if(fobj.exists())
        {
            System.out.println("File is Successfully opened");
        }

        sc.close();

    }
}
