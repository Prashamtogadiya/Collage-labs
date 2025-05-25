import java.util.Scanner;

class Student{
    int id_no;
    int no_of_subjects_registered;
    String[] subject_code; 
    int[] subject_credits;
    String[] grade_obtained;
    double spi;
    Scanner sc = new Scanner(System.in);
    public Student(){
        System.out.print("Enter id  : ");
        id_no = sc.nextInt();
        System.out.print("Enter number of subject rigistered : ");
        no_of_subjects_registered = sc.nextInt();
    }
    public void subjectMarks(){
        subject_code = new String[no_of_subjects_registered];
        subject_credits = new int[no_of_subjects_registered];
        grade_obtained = new String[no_of_subjects_registered];

        for (int i = 0; i < no_of_subjects_registered; i++) {
            System.out.print("\nEnter code of subject"+"("+(i+1)+")"+" : ");
            subject_code[i] = sc.next();
            System.out.print("Enter cradit for subject code "+subject_code[i]+" : ");
            subject_credits[i] = sc.nextInt();
            System.out.print("Enter grad obtained in subject code(capital only) "+subject_code[i]+ " : ");
            grade_obtained[i] = sc.next();
        }
    }
    public void studentSPI(){
        double GM=0;
        double total = 0;
        for (int i = 0; i < no_of_subjects_registered; i++) {
            switch (grade_obtained[i]) {
                case "A++":
                    GM += 9 * subject_credits[i];
                    break;
                case "A+":
                    GM += 8 * subject_credits[i];
                    break;
                case "A":
                    GM += 7 * subject_credits[i];
                    break;
                case "B+":
                    GM += 6 * subject_credits[i];
                    break;
                case "B":
                    GM += 5 * subject_credits[i];
                    break;
                case "C+":
                    GM += 4 * subject_credits[i];
                    break;
                case "C":
                    GM += 3 * subject_credits[i];
                    break;
                case "F":
                    GM += 0;
                    break;
                default:
                    System.out.println("\nYou entered worng grade.");
                    break;
            }
            total += subject_credits[i];
        }
        spi = GM/total;
        System.out.println("\nSPI of stuednt "+id_no+" is : "+spi+"\n");
    }
}
public class StudentData {
    public static void main(String[] args) {
        int n = Integer.parseInt(args[0]);
        System.out.println(args[0]+" student created");
        Student[] st = new Student[n];
        for (int i = 0; i < n; i++) {
            System.out.println("For student "+i);
            st[i] = new Student();
            st[i].subjectMarks();
            st[i].studentSPI();
        }
    }
}