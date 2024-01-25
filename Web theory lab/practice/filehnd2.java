package practice;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class filehnd2 {
    public static void main(String[] args) {
        File myfile = new File("prac1.txt");
try {
    Scanner sc=new Scanner(myfile);
    while (sc.hasNextLine()){
        String s =sc.nextLine();
        System.out.println(s);
    }
    sc.close();
}
catch (FileNotFoundException e) {
    throw new RuntimeException(e);
}
    }
}