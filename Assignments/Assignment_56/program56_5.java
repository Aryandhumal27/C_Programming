/*
    5. Write java program to accept directory name from user and display
       all names of files from that directory
*/
import java.util.Scanner;
import java.io.File;

public class program56_5 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String FileName = new String();

        System.out.println("Enter the directory name : ");
        FileName = sobj.next();

        File fobj = new File(FileName);

        if(fobj.isDirectory() == false)
        {
            System.out.println("Please enter valid directory name :");
            return;
        }

        File arr[] = fobj.listFiles();

        for(File file : arr)
        {
            System.out.println(file.getName());
        }

        sobj.close();
    }
}
