/*
    3. Write a program in java which accepts a directory name from user and display
        sub-directories from directory.
*/

import java.util.*;
import java.io.*;

class program59_3
{
    public static void main(String A[])
    {
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
            if(ffobj.isDirectory())
            {
                System.out.println(Arr[i]);
            }     
        }

        sobj.close();
    }
}