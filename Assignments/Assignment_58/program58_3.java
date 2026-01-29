/*
    3. Write java program to accept directory name from user and write
       data of all files into one newly created file 
       named as "Marvellous.txt"
*/

import java.util.*;
import java.io.*;

class program58_3
{
    public static void main(String[] args) throws IOException 
    {
        int iRet = 0;
        Scanner sobj = new Scanner(System.in);
        File fArr[] = null; 
        FileOutputStream foobj = null;
        FileInputStream fiobj = null;
        byte Buffer[] = new byte[1024];
        
        String DirectoryName = null;

        System.out.println("Enter the directory name : ");
        DirectoryName = sobj.nextLine();

        File fobj = new File(DirectoryName);

        if((fobj.exists()) && (fobj.isDirectory()))
        {
            File nfobj = new File("Marvellous.txt");
            nfobj.createNewFile();

            foobj = new FileOutputStream("Marvellous.txt");
            fArr = fobj.listFiles();

            for(int i = 0; i < fArr.length; i++)
            {
                fiobj = new FileInputStream(fArr[i]);

                while((iRet = fiobj.read(Buffer)) != -1)
                {
                    foobj.write(Buffer, 0, iRet);
                }
                fiobj.close();
            }
            foobj.close();
        }
        else
        {
            System.out.println("There is no such Directory");
        }

        sobj.close();
    }
}
