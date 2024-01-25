package LAB_5;

import java.util.Scanner;
class Student {
        public String name;
        public int roll;
        public int marks;

        public Student(String name, int roll, int marks) {
            this.name = name;
            this.roll = roll;
            this.marks = marks;
        }
        public String getName() {
            return name;
        }
        public int getRoll() {
            return roll;
        }
        public int getMarks() {
            return marks;
        }
    }
    public class qus2 {
        public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            Student[] students = new Student[5];

            for (int i = 0; i < 5; i++) {
                System.out.print("Enter name of student " + (i+1) + ": ");
                String name = sc.nextLine();

                System.out.print("Enter roll number of student " + (i+1) + ": ");
                int roll = sc.nextInt();
                sc.nextLine();

                System.out.print("Enter marks of student " + (i+1) + ": ");
                int marks = sc.nextInt();
                sc.nextLine();

                students[i] = new Student(name, roll, marks);
            }

            for (int i = 0; i < 5; i++) {
                System.out.println("Name: " + students[i].getName());
                System.out.println("Roll: " + students[i].getRoll());
                System.out.println("Marks: " + students[i].getMarks());
            }
        }
    }

