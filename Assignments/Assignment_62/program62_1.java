/*
    1. Write a program in Java which accepts file name from user and display total number of bytes read from
    that file.
*/

import java.io.File;
import java.io.FileReader;
import java.util.Scanner;

class program62_1 
{
    public static void main(String[] A) throws Exception
    {
        Scanner sobj = new Scanner(System.in);    
        String FileName = null;
        File fobj = null;
        FileReader frobj = null;
        int iRet = 0, ByteCount = 0;
        char Buffer[] = new char[1024];

        System.out.println("Enter the file name : ");
        FileName = sobj.nextLine();

        fobj = new File(FileName);
        
        if(fobj.exists() == false || fobj.isFile() == false)
        {
            System.out.println("There is no such file");
            sobj.close();
            return;
        }

        frobj = new FileReader(fobj);

        while((iRet = frobj.read(Buffer)) != -1)
        {
            ByteCount = ByteCount + iRet;
        }

        System.out.println("Total number of bytes read from the file are : "+ByteCount);

        frobj.close();
        sobj.close();
    }
}
