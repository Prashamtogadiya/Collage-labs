class Time{
    int hour;
    int minute;
    int second;
    public Time(int hour, int minute, int second){
        this.hour = hour;
        this.minute = minute;
        this.second = second;
    }
    public Time() {
        this.hour = 0;
        this.minute = 0;
        this.second = 0;
    }
    public void add(Time t2, Time tadd){
        tadd.second = second + t2.second;
        tadd.minute = minute + t2.minute;
        tadd.hour = hour + t2.hour;
        if (tadd.second>59) {
            tadd.second-=60;
            tadd.minute++;
        }
        if (tadd.minute>59) {
            tadd.minute-=60;
            tadd.hour++;
        }
        System.out.println(tadd.hour+":"+tadd.minute+":"+tadd.second);
    }
    public void print(Time t){
    }
}
public class TimeMethod{
    public static void main(String[] args){
        Time t1 = new Time(2, 54, 53);
        Time t2 = new Time(5, 6, 7);
        Time tadd = new Time();
        t1.add(t2,tadd);
    }
}