/*
    5. Write a java program to accept directory name from user and display
       all names of files from that directory and size of each file on screen.
*/

import java.util.*;
import java.io.*;

class program57_5 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        File fArr[] = null; 
        
        String DirectoryName = null;

        System.out.println("Enter the directory name : ");
        DirectoryName = sobj.nextLine();

        File fobj = new File(DirectoryName);

        if((fobj.exists()) && (fobj.isDirectory()))
        {
            fArr = fobj.listFiles();

            for(int i = 0; i < fArr.length; i++)
            {
                System.out.println("File Name are : "+fArr[i].getName());
                System.out.println("File Size are : "+fArr[i].length());
            }
        }
        else
        {
            System.out.println("There is no such Directory");
        }

        sobj.close();
    }
}
