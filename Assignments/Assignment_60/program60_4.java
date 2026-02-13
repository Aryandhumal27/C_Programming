/*
    4. Write a program in Java which accepts a directory name and file extension from user and display only files
    having that extension.
*/

import java.io.*;
import java.util.Scanner;

class Logic
{
    String ChkExtension(String FileName)
    {
        if(FileName == null || !FileName.contains("."))
        {
            return "";
        }
            
        String Arr[] = null;
        String Extension = "";

        Arr = FileName.split("\\.");
        Extension = Extension.concat(".").concat(Arr[(Arr.length - 1)]);

        return Extension;
    }
}

class program60_4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String DirectoryName = null;
        String Extension = null;
        String CurrentFileExtension = null;
        File fobj = null;
        Logic lobj = new Logic();
        String fileArr[] = null;
        int i = 0;

        System.out.println("Enter Directory Name : ");
        DirectoryName = sobj.nextLine();

        System.out.println("Enter the extension : ");
        Extension = sobj.nextLine();

        fobj = new File(DirectoryName);

        if(fobj.isDirectory() == false)
        {
            System.out.println("Inavlid Directory");
            sobj.close();
            return;
        }

        fileArr = fobj.list();

        for(i = 0; i < fileArr.length; i++)
        {
            CurrentFileExtension = lobj.ChkExtension(fileArr[i]);
            if(Extension.equals(CurrentFileExtension))
            {
                System.out.println(fileArr[i]);
            }
        }

        sobj.close();
    }
}
