/*
    3. Write a java program to accept directory name from user and create that directory. 
*/

import java.util.*;
import java.io.*;

class program57_3 
{
    public static void main(String A[]) throws IOException
    {
        Scanner sobj = new Scanner(System.in);
        String DirectoryName = null;

        System.out.println("Enter the name of directory : ");
        DirectoryName = sobj.nextLine();

        File fobj = new File(DirectoryName);
        fobj.mkdir();

        sobj.close();
    }
}
