package LAB_11;

import java.io.*;

/*
wap to copy the content of a given file to another file using character string
 */
public class qus5 {


        public static void main(String args[]) throws IOException {
            int i=0;
            FileInputStream fin;
            FileOutputStream fout;

            try{

                fin=new FileInputStream("abc.txt");
            }

            catch(FileNotFoundException e) {
                System.out.println("File Not Found");
                return;
            }

                try{
                    fout=new FileOutputStream("xyz.xt");
                }

                catch(FileNotFoundException e){
                    System.out.println("Errorin Opening File");

                    return;
                }
                try{
                do {
                    i = fin.read();
                    if (i != -1)
                        fout.write(i);
                }while(i!=-1);
            }
catch(IOException e){
                System.out.println("File Error");
            }
            fin.close();
            fout.close();


    }
}
