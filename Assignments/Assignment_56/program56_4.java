/*
    4. Write java program to accept file name from use and create
       new file of that name if it is not existing.
*/

import java.util.Scanner;
import java.io.File;
import java.io.IOException;

public class program56_4 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String FileName = new String();

        System.out.println("Enter the file name : ");
        FileName = sobj.nextLine();

        File fobj = new File(FileName);

        if(fobj.exists())
        {
            System.out.println("File is already Exists");
        }
        else
        {
            try {
                fobj.createNewFile();
                System.out.println("File created Successfully\n");
            } catch (IOException e) {
                // TODO Auto-generated catch block
                e.printStackTrace();
            }
            
        }

        sobj.close();
    }
}
