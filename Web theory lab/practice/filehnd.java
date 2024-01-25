package practice;

import java.io.File;
import java.io.FileWriter;
import java.io.IOException;

public class filehnd {
    public static void main(String[] args) throws IOException {
        File myfile= new File("prac1.txt");
        try {
            myfile.createNewFile();
        }
        catch (IOException e){
            System.out.println("error");
        }

        FileWriter fileWriter = new FileWriter("prac1.txt");
        try {
            fileWriter.write("WELCOME");
            fileWriter.close();
        }
        catch (IOException e){
            System.out.println("error");
            e.printStackTrace();
        }
    }
}
