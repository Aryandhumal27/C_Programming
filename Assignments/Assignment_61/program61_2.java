/*
    2. Write a program in Java which accepts source file name and destination file name from user and copy data
    using byte[] buffer.
*/

import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.util.Scanner;

class program61_2
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        String SourceFile = null, DestinationFile = null;
        byte Buffer[] = new byte[1024];
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

        File fdestobj = new File(SourceFile);
        fdestobj.createNewFile();
        
        FileInputStream fiobj = new FileInputStream(SourceFile);
        FileOutputStream foobj = new FileOutputStream(DestinationFile);

        while((iRet = fiobj.read(Buffer)) != -1)
        {
            foobj.write(Buffer, 0, iRet);
        }

        System.out.println("File copied successfully");
    
        foobj.close();
        fiobj.close();
        sobj.close();
    }
}