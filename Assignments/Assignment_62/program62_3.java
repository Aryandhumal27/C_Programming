/*
    3. Write a program in Java which accepts file name and integer N from user and copy last N bytes into a new
    file.
*/

import java.io.File;
import java.io.FileOutputStream;
import java.io.RandomAccessFile;
import java.util.Scanner;

class program62_3
{
    public static void main(String[] A) throws Exception
    {
        Scanner sobj = new Scanner(System.in);    
        String FileName = null;
        File fobj = null;
        FileOutputStream fwobj = null;
        RandomAccessFile robj = null;
        byte Buffer[] = null;
        String Token[] = null;
        int iValue = 0;
        long iSize = 0;
        int CurrentOffset = 0;

        System.out.println("Enter the file name : ");
        FileName = sobj.nextLine();

        Token = FileName.split("\\.");

        fobj = new File(FileName);
        robj = new RandomAccessFile(fobj, "r");
        iSize = fobj.length();
        
        if(fobj.exists() == false || fobj.isFile() == false)
        {
            System.out.println("There is no such file");
            sobj.close();
            robj.close();
            return;
        }

        System.out.println("Enter the no of byte you want to write in new file : ");
        iValue = sobj.nextInt();

        CurrentOffset = (int)iSize - iValue;
        robj.seek(CurrentOffset);

        Buffer = new byte[iValue];

        robj.read(Buffer, 0, iValue);

        String WriteFileName = Token[0] + "New." + Token[1];
        fwobj = new FileOutputStream(WriteFileName);

        fwobj.write(Buffer, 0, iValue);
        
        fwobj.close();
        robj.close();

        sobj.close();
    }
}
