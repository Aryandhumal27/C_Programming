/*
    4. Write a program in Java which accepts two input file names and one output file name and merge both files
    into the output file.
*/

import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.util.Scanner;

class program61_4 
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        String InputFile1 = null, InputFile2 = null;
        String OutputFile = null;
        File f1obj = null;
        File f2obj = null;
        File foobj = null;
        FileReader fr1obj = null;
        FileReader fr2obj = null;
        FileWriter fwobj = null;
        char Buffer[] = new char[1024];
        int iRet = 0;

        System.out.println("Enter the first input file name : ");
        InputFile1 = sobj.nextLine();

        f1obj = new File(InputFile1);

        if(f1obj.exists() == false && f1obj.isFile() == false)
        {
            System.out.println("There is no such file");
            sobj.close();
            return;
        }

        System.out.println("Enter the second input file name : ");
        InputFile2 = sobj.nextLine();

        f2obj = new File(InputFile2);

        if(f2obj.exists() == false && f2obj.isFile() == false)
        {
            System.out.println("There is no such file");
            sobj.close();
            return;
        }

        System.out.println("Enter the output file name : ");
        OutputFile = sobj.nextLine();

        foobj = new File(OutputFile);
        foobj.createNewFile();

        fr1obj = new FileReader(f1obj);
        fr2obj = new FileReader(f2obj);
        fwobj = new FileWriter(foobj);

        fwobj.write("\n" + f1obj.getName() + "\t\t" + f1obj.length()+"\n");

        while((iRet = fr1obj.read(Buffer)) != -1)
        {
            fwobj.write(Buffer, 0, iRet);
        }

        fwobj.write("\n" + f2obj.getName() + "\t\t" + f2obj.length()+"\n");

        while((iRet = fr2obj.read(Buffer)) != -1)
        {
            fwobj.write(Buffer, 0, iRet);
        }

        System.out.println("Files Merge Successfully");
        
        fwobj.close();
        fr2obj.close();
        fr1obj.close();

        sobj.close();
    }    
}
