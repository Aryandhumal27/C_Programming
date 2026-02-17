/*
    2. Write a program in java which copies a file using normal 
    streams and buffered stream and display the time required for both.
*/

import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.util.Scanner;

class program63_2 
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        String FileName = null;
        String CopiedFileName1 = null;
        String CopiedFileName2 = null;
        String Arr[] = new String[2];
        FileInputStream fiobj = null;
        FileOutputStream foobj1 = null;
        FileOutputStream foobj2 = null;
        BufferedInputStream biobj = null;
        BufferedOutputStream boobj = null;
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
        CopiedFileName1 = Arr[0] + "_backup1." + Arr[1];
        CopiedFileName2 = Arr[0] + "_backup2." + Arr[1];

        fiobj = new FileInputStream(fobj);
        foobj1 = new FileOutputStream(CopiedFileName1);
        foobj2 = new FileOutputStream(CopiedFileName2);

        long StartTimeStream = System.nanoTime();

        while((iRet = fiobj.read(Buffer, 0, Buffer.length)) != -1)
        {
            foobj1.write(Buffer, 0, iRet);
        }

        long EndTimeStream = System.nanoTime();

        System.out.println("Time taken for normal stream are : " +( EndTimeStream - StartTimeStream));


        fiobj = new FileInputStream(fobj); 
        biobj = new BufferedInputStream(fiobj);
        boobj = new BufferedOutputStream(foobj2);

        long StartTimeBuffer = System.nanoTime();

        while((iRet = biobj.read(Buffer)) != -1)
        {
            boobj.write(Buffer, 0, iRet);
        }

        long EndTimeBuffer = System.nanoTime();

        System.out.println("Time taken for buffer are : " +(EndTimeBuffer -  StartTimeBuffer ));

        boobj.flush();

        System.out.println("File Copied Successfully");

        foobj1.close();
        foobj2.close();
        fiobj.close();
        
        sobj.close();
    }      
}
