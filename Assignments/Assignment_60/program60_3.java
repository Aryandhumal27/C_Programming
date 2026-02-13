/*
    3. Write a program in Java which accepts a directory name from user and display the name of the smallest file (by
    size).
*/

import java.io.*;
import java.util.Scanner;

class program60_3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String DirectoryName = null;
        File fobj = null;
        File ffobj = null;
        String fileArr[] = null;
        String SmallestFileName = null;
        long iSizeMin = 0, iSize = 0;
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
        ffobj = new File(fobj, fileArr[0]);

        iSizeMin = ffobj.length();
        SmallestFileName = fileArr[0];


        for(i = 0; i < fileArr.length; i++)
        {
            ffobj = new File(fobj, fileArr[i]);

            if(ffobj.isFile() == false)
            {
                continue;
            }

            iSize = ffobj.length();

            if(iSize < iSizeMin)
            {
                iSizeMin = iSize;
                SmallestFileName = fileArr[i];
            }
        }

        System.out.println("Smallest File by Size : "+ SmallestFileName);

        sobj.close();
    }
}
