/*
    1. Write a program in Java which accepts source file name and destination file name from user and copy data
    from source to destination (byte by byte).
*/

import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.util.Scanner;

class program61_1
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        String SourceFile = null, DestinationFile = null;
        char Buffer[] = new char[1024];
        int iRet = 0;

        System.out.println("Enter the source file name : ");
        SourceFile = sobj.nextLine();

        File fsrcobj = new File(SourceFile);

        if(fsrcobj.exists() == false || fsrcobj.isFile()== false)
        {
            System.out.println("There is no such file");
            sobj.close();
            return;
        }

        System.out.println("Enter the destination file name : ");
        DestinationFile = sobj.nextLine();

        File fdestobj = new File(DestinationFile);
        fdestobj.createNewFile();
        
        FileReader frobj = new FileReader(fsrcobj);
        FileWriter fwobj = new FileWriter(fdestobj);

        while((iRet = frobj.read(Buffer)) != -1)
        {
            fwobj.write(Buffer, 0, iRet);
        }

        System.out.println("File copied successfully");

        fwobj.close();
        frobj.close();
 
        sobj.close();
    }
}