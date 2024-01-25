package LAB_4;

import java.util.Scanner;

public class qus2 {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int m;
        m= sc.nextInt();
       char arr[]=new char[m];
  for (int i =0;i<m;i++){
      arr[i]=sc.next().charAt(0);
  }
        System.out.println("The Reverse :");
        for (int i=m-1;i>=0;i--){
            System.out.println(arr[i]);
        }
        int count = 0;int x =0;
        for (int i= 0;i<m;i++){
            if (arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'){
                count++;
            }
        else
            x=x+1;
        }
            System.out.println("The no.of vowel="+ count);
        System.out.println("The no.of consonants ="+x);

    }
}
