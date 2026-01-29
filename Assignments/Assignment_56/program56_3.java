/*
    3. Write java program to accept file name from user and open that file in write mode and write some 
       data at the end of file.
*/

// import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class program56_3 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String FileName = new String();

        System.out.println("Enter the file name : ");
        FileName = sobj.nextLine();

        try {
            FileWriter fileWriter = new FileWriter(FileName, true);
            fileWriter.write("My name is Aryan");
            fileWriter.close();
        } catch (IOException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }

        sobj.close();
    }
}
