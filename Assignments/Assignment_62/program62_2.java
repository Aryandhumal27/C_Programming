/*
    2. Write a program in Java which accepts file name and integer N from user and copy first N bytes into a
    new file.
*/

import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.util.Scanner;

class program62_2
{
    public static void main(String[] A) throws Exception
    {
        Scanner sobj = new Scanner(System.in);    
        String FileName = null;
        File fobj = null;
        FileReader frobj = null;
        FileWriter fwobj = null;
        char Buffer[] = null;
        String Token[] = null;
        int iValue = 0;

        System.out.println("Enter the file name : ");
        FileName = sobj.nextLine();

        Token = FileName.split("\\.");

        fobj = new File(FileName);
        
        if(fobj.exists() == false || fobj.isFile() == false)
        {
            System.out.println("There is no such file");
            sobj.close();
            return;
        }

        System.out.println("Enter the no of byte you want to write in new file : ");
        iValue = sobj.nextInt();

        Buffer = new char[iValue];

        frobj = new FileReader(fobj);

        frobj.read(Buffer, 0, iValue);

        String WriteFileName = Token[0] + "New." + Token[1];
        fwobj = new FileWriter(WriteFileName);

        fwobj.write(Buffer, 0, iValue);
        
        frobj.close();
        fwobj.close();

        sobj.close();
    }
}
