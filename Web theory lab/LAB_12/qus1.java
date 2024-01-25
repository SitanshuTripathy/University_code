package LAB_12;

import java.util.Scanner;

/*
Wap in java to accept a string and set the capacity to 50. calc the length of input string without spaces.
also count the no.of words with only one vowel.
 */
public class  qus1 {
    public static void main(String[] args) {
        StringBuffer sb=new StringBuffer(50);
        Scanner sc =new Scanner(System.in);
        sb=sb.append(sc.nextLine());
        String st= sb.toString();
        st=st.replaceAll("\\s","");
        System.out.println(st);
        System.out.println("length = "+st.length());
        String st2= sb.toString();
        int count = 0;
        for (int i = 0; i < st2.length(); i++) {

            if (st2.charAt(i) == 'a' || st2.charAt(i) == 'e' || st2.charAt(i) == 'i' || st2.charAt(i) == 'o' || st2.charAt(i) == 'u') {
                count++;
            }}
        System.out.println("vowels in string is "+count);
    }
}
