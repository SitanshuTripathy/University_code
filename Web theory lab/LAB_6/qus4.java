package LAB_6;

import java.util.Scanner;
 class Number {
     private int[] arr;
     private int size;

     public Number(int size) {
         this.size = size;
         arr = new int[size];
     }

     public void read() {
         Scanner sc = new Scanner(System.in);
         System.out.println("Enter " + size + " integers:");
         for (int i = 0; i < size; i++) {
             arr[i] = sc.nextInt();
         }
     }

     public void swap() {
         int minIndex = 0;
         int maxIndex = 0;

         for (int i = 1; i < size; i++) {
             if (arr[i] < arr[minIndex]) {
                 minIndex = i;
             }
             if (arr[i] > arr[maxIndex]) {
                 maxIndex = i;
             }
         }

         int temp = arr[minIndex];
         arr[minIndex] = arr[maxIndex];
         arr[maxIndex] = temp;
     }

     public void display() {
         System.out.println("The swapped array is:");
         for (int i = 0; i < size; i++) {
             System.out.print(arr[i] + " ");
         }
         System.out.println();
     }
 }
public class qus4 {

        public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            System.out.print("Enter the size of the array: ");
            int size = sc.nextInt();
            Number num = new Number(size);
            num.read();
            num.swap();
            num.display();
        }
    }

