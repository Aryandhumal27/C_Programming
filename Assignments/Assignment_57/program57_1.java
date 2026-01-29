/*
    1. Write java program to accept two file names from user and open first
       file and create new file (Second name) and copy the data from first 
       file into newly created file.
*/

import java.util.Scanner;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileWriter;
import java.io.IOException;

class program57_1
{
    public static void main(String A[]) throws IOException
    {
        Scanner sobj = new Scanner(System.in);
        String FileName1, FileName2 = new String(); 

        System.out.println("Enter the file name to copy the data : ");
        FileName1 = sobj.nextLine();

        System.out.println("Enter the file name to paste the data : ");
        FileName2 = sobj.nextLine();

        File fobj = new File(FileName1);

        try 
        {
            
            Scanner sc = new Scanner(fobj);
            FileWriter fileWriter = new FileWriter(FileName2);

            while(sc.hasNextLine())
            {
                String Line = new String(sc.nextLine());
                fileWriter.write(Line + "\n");    
            }
            fileWriter.close();
            sc.close();
            System.out.println("Data Written Successfully\n");
        } catch (FileNotFoundException e) {
            // TODO Auto-generated catch block
            System.out.println("There is some issue in written the data\n");
            e.printStackTrace();
        }
        sobj.close();
    }
}