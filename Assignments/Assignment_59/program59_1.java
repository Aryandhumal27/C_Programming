/*
    1. Write a program in java which accepts a directory name from user and display
        names of all files from that directory.
*/

import java.util.*;
import java.io.*;

class program59_1
{
    public static void main(String A[])
    {
        String DirectoryName = null;
        File fobj = null;
        File Arr[] = null;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of directory : ");
        DirectoryName = sobj.nextLine();

        fobj = new File(DirectoryName);
        Arr = fobj.listFiles();

        for (File fName : Arr) 
        {
            System.out.println(fName);   
        }

        sobj.close();
    }
}