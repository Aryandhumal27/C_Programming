/*
    5. Write a program in java which accepts file name from user and handle
    all possible file related exception properly
*/

import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.nio.file.FileAlreadyExistsException;
import java.util.Scanner;

class program62_5
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        String FileName = null;
        File fobj = null;
        FileInputStream fiobj = null;

        System.out.println("Enter the file name : ");
        FileName = sobj.nextLine();

        fobj = new File(FileName);

        try {
            fiobj = new FileInputStream(fobj);
            fiobj.close();
        } catch (FileNotFoundException e) {
            System.err.println("File Not Found : " + e.getMessage());
        } catch (IOException e) {
            System.err.println("An I/O error occured : " + e.getMessage());
        } 

        try {
            fobj.createNewFile();
        } catch(FileAlreadyExistsException e)
        {
            System.err.println("File is already exist : " + e.getMessage());
        } catch(SecurityException e)
        {
            System.err.println(e.getMessage());
        }catch(IOException e)
        {
            System.err.println("An I/O error occured : " + e.getMessage());
        }
          
        sobj.close();
    }   
}
