/*
    4. Write a program in java which accepts a directory name from user and display
        sub-directories from directory.
*/

import java.util.*;
import java.io.*;

class program59_4
{
    public static void main(String A[])
    {
        int FileCount = 0;
        int FolderCount = 0;
        String DirectoryName = null;
        File fobj = null;
        File ffobj = null;
        String Arr[] = null;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of directory : ");
        DirectoryName = sobj.nextLine();

        fobj = new File(DirectoryName);
        Arr = fobj.list();

        for(int i = 0; i < Arr.length; i++) 
        {
            ffobj = new File(fobj, Arr[i]);
            
            if(ffobj.isFile())
            {
                FileCount++;                
            }   
            else if(ffobj.isDirectory())
            {
                FolderCount++;
            }  
        }

        System.out.println("Total Count of Files : "+FileCount);
        System.out.println("Total Count of Folders : "+FolderCount);

        sobj.close();
    }
}