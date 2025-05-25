import java.io.*;
import java.util.*;

class Students{
    String name;
    int rollno;
    String email;
    int semester;

    public Students( int rollno, String name, String email, int semester){
        this.rollno = rollno;
        this.name = name;
        this.email = email;
        this.semester = semester;
    }
}

public class StudentsData{
    public static void main(String[] args) {
        
        try{
            BufferedReader br = new BufferedReader(new FileReader("data.csv"));
            BufferedWriter bw = new BufferedWriter(new FileWriter("NewData.csv"));
            ArrayList<Students> students = new ArrayList<Students>();
            System.out.println("Roll.No     Name    Email           Semester");

            while (br.ready()) {
                String temp= br.readLine();
                String [] data = temp.split(",");
                Students s = new Students(Integer.parseInt(data[0]) ,data[1] , data[2], Integer.parseInt(data[3]));
                students.add(s);
            }

            Iterator<Students> itr = students.iterator();
            while (itr.hasNext()){
                Students s = itr.next();
                if (s.rollno>102) {
                    s.semester++;
                }
                String data = s.rollno + ","+s.name + ","+s.email+","+s.semester;
                bw.write(data);
                bw.newLine();
                System.out.println(s.rollno + "         "+s.name + "     "+s.email+"     "+s.semester);
            }
            br.close();
            bw.close();
        }
        catch(Exception e){
            e.printStackTrace();
        }
        
    }
}