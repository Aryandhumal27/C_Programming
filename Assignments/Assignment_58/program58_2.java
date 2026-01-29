/*
    2. Write java program to accept directory name from user and display
       all names of files from that directory into one newly created file 
       named as "Marvellous.txt"
*/

import java.util.*;
import java.io.*;

class program58_2
{
    public static void main(String[] args) throws IOException 
    {
        Scanner sobj = new Scanner(System.in);
        File fArr[] = null; 
        FileOutputStream foobj = null;
        
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
                String name = fArr[i].getName() + "\n";
                byte Arr[] = name.getBytes();
                foobj.write(Arr);
            }
        }
        else
        {
            System.out.println("There is no such Directory");
        }

        sobj.close();
    }
}
