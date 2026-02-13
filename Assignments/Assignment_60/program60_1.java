/*
    1. Write a program in Java which accepts a directory name from user and calculate total size of all files from that
    directory.
*/

import java.io.*;
import java.util.Scanner;

class program60_1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String DirectoryName = null;
        File fobj = null;
        File ffobj = null;
        String fileArr[] = null;
        long iSum = 0;
        long iSize = 0;
        int i = 0;

        System.out.println("Enter Directory Name : ");
        DirectoryName = sobj.nextLine();

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
             ffobj = new File(fobj, fileArr[i]);

             if(ffobj.isFile() == false)
             {
                continue;
             }

             iSize = ffobj.length();
             iSum = iSum + iSize;
        }

        System.out.println("Total size of all files are : "+ iSum + " bytes");

        sobj.close();
    }
}
