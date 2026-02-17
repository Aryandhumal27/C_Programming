/*
    4. Write a program in java which accepts file name from user and create
    a backup copy of it with name original_backup.ext
*/

import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.util.Scanner;

class program62_4 
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        String FileName = null;
        String CopiedFileName = null;
        String Arr[] = new String[2];
        FileInputStream fiobj = null;
        FileOutputStream foobj = null;
        byte Buffer[] = new byte[1024];
        int iRet = 0;

        System.out.println("Enter the file name : ");
        FileName = sobj.nextLine();

        File fobj = new File(FileName);

        if(fobj.exists() == false || fobj.isFile() == false)
        {
            sobj.close();
            return;
        }

        Arr = FileName.split("\\.");
        CopiedFileName = Arr[0] + "_backup." + Arr[1];

        fiobj = new FileInputStream(fobj);
        foobj = new FileOutputStream(CopiedFileName);

        while((iRet = fiobj.read(Buffer, 0, Buffer.length)) != -1)
        {
            foobj.write(Buffer, 0, iRet);
        }

        foobj.close();
        fiobj.close();
        
        sobj.close();
    }   
}
