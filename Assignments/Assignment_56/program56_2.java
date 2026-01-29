/*
    2. Write java program to accept file name from user and open that 
    file and display the contents on screen.
*/

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;


public class program56_2 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        String FileName = new String();
        System.out.println("Enter the file Name : ");
        FileName = sobj.nextLine();

        File fobj = new File(FileName);

        try 
        {
            Scanner sc = new Scanner(fobj);
            while(sc.hasNextLine())
            {
                String Line = new String(sc.nextLine());
                System.out.println(Line);
            }

            sc.close();
        } 
        catch (FileNotFoundException e) 
        {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
        
    
        sobj.close();

    }
}
