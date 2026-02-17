/*
    3. Write a program in Java which accepts file name and one string from user and append that string at the
    end of file.
*/

import java.io.File;
import java.io.FileWriter;
import java.util.Scanner;

class program61_3 
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        String FileName = null;
        String str = null;
        FileWriter frobj = null;
        File fobj = null;


        System.out.println("Enter the file Name : ");
        FileName = sobj.nextLine();

        fobj = new File(FileName);

        if((fobj.exists() == false) && (fobj.isFile() == false))
        {
            System.out.println("There is no such file");
            sobj.close();
            return;
        }

        System.out.println("Enter the string : ");
        str = sobj.nextLine();

        frobj = new FileWriter(FileName, true);
        frobj.write(str);

        System.out.println("String append successfully");

        frobj.close();
        sobj.close();
    }
}
