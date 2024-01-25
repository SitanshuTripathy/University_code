package Sessional;

import java.util.Scanner;

class Student {
    int roll;
    int[] marks = new int[3];
    String group;

    Student(int r, int[] m) {
        roll = r;
        marks = m;
        if (r / 1000  == 5) {
            System.out.println("Belong to cse");
            group = "CSE";
        } else if (r / 1000 == 6) {
            System.out.println("Belong to IT");
            group = "IT";
        }
    }

    void checkMarks() throws MarksException {
        for (int i = 0; i < marks.length; i++) {
            if (marks[i] < 40) {
                throw new MarksException("Candidate shall appear for improvement");
            }
        }
    }
}

class MarksException extends Exception {
    MarksException(String s) {
        super(s);
    }
}

public class qus1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the no.of student =");
        int nm= sc.nextInt();
        Student[] s = new Student[nm];
        for (int i = 0; i < s.length; i++) {
            System.out.println("Enter roll number of student " + (i + 1));
            int r = sc.nextInt();
            System.out.println("Enter marks of three subjects of student " + (i + 1));
            int[] m = new int[3];
            for (int j = 0; j < m.length; j++) {
                m[j] = sc.nextInt();
            }
            s[i] = new Student(r, m);
            try {
                s[i].checkMarks();
            } catch (MarksException e) {
                System.out.println(e.getMessage());
            }
        }

        Student[] cseStudents = new Student[10];
        Student[] itStudents = new Student[10];
        int cseCount = 0;
        int itCount = 0;
        for (int i = 0; i < s.length; i++) {
            if (s[i].group == "CSE") {
                cseStudents[cseCount++] = s[i];
            } else if (s[i].group == "IT") {
                itStudents[itCount++] = s[i];
            }
        }

        System.out.println("CSE Students:");
        for (int i = 0; i < cseCount; i++) {
            System.out.println(cseStudents[i].roll);
        }

        System.out.println("IT Students:");
        for (int i = 0; i < itCount; i++) {
            System.out.println(itStudents[i].roll);
        }
    }
}
