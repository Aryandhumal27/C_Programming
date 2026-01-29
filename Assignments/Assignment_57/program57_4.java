/*
    4. Write a java program to accept file name from user calculate
       checksum of that file and display on screen.
*/

import java.util.*;
import java.io.*;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;

class program57_4 
{
    public static void main(String A[]) throws NoSuchAlgorithmException, IOException
    {
        int iRet = 0;
        byte Buffer[] = new byte[1024];
        Scanner sobj = new Scanner(System.in);

        String FileName = null;

        System.out.println("Enter the file name : ");
        FileName = sobj.nextLine();

        FileInputStream fiobj = new FileInputStream(FileName);

        MessageDigest mdobj = MessageDigest.getInstance("SHA-256");

        while((iRet = fiobj.read(Buffer)) != -1)
        {
            mdobj.update(Buffer, 0, iRet);
        }

        byte Digest[] = mdobj.digest();

        StringBuilder checksum = new StringBuilder();

        for(int i = 0; i < Digest.length; i++)
        {
            checksum.append(String.format("%02x", Digest[i]));
        }
        System.out.println("CheckSum of File is : " + checksum);

        fiobj.close();
        sobj.close();
        
    }
}
