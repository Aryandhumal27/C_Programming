/*
    1. Write a java program in java which accepts source and destination
    file names and copy file using BufferedInputStream and BufferedOutputStream.
*/

import java.util.Scanner;
import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.FileInputStream;
import java.io.FileOutputStream;

class program63_1 
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        String SrcFileName = null;
        String DestFileName = null;
        FileInputStream fsrcobj = null;
        FileOutputStream fdestobj = null;
        BufferedInputStream biobj = null;
        BufferedOutputStream boobj = null;
        int iRet = 0;

        System.out.println("Enter the source file name : ");
        SrcFileName = sobj.nextLine();

        System.out.println("Enter the destination file name : ");
        DestFileName = sobj.nextLine();

        fsrcobj = new FileInputStream(SrcFileName);
        fdestobj = new FileOutputStream(DestFileName);

        biobj = new BufferedInputStream(fsrcobj);
        boobj = new BufferedOutputStream(fdestobj);

        while((iRet = biobj.read()) != -1)
        {
            boobj.write(iRet);
        }

        boobj.flush();

        System.out.println("File Copied Successfully");

        fsrcobj.close();
        fdestobj.close();
        sobj.close();
    }
    
}