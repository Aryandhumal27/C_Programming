/*
    5. Write a program in Java which accepts a path from user and display whether it exists or not. If it exists, display
    whether it is a file or directory.
*/

import java.util.*;
import java.io.*;

class program60_5 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String PathName = null;

        System.out.println("Enter the Path : ");
        PathName = sobj.nextLine();

        File fobj = new File(PathName);

        if(fobj.exists() == false)
        {
            System.out.println("There is no such directory");
            sobj.close();
            return;
        }
        
        System.out.println(PathName + " is exists");

        if(fobj.isDirectory())
        {
            System.out.println("It is a directory");
        }
        else if(fobj.isFile())
        {
            System.out.println("It is File");
        }

        sobj.close();
    }
}
