import java.util.Scanner;
public class ConsonantsVowels{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string : ");
        String str = sc.nextLine();
        sc.close();
        int vowels=0, space=0; 
        str = str.toLowerCase();
        for(int i=0; i<str.length(); i++){
            if(str.charAt(i)=='a' || str.charAt(i)=='e' || str.charAt(i)=='i' || str.charAt(i)=='o' || str.charAt(i)=='u'){
                vowels++;
            }
            else if(str.charAt(i)==' '){
                space++;
            }
        }
        System.out.println("Consonants = "+(str.length()-space-vowels));
        System.out.println("Vowels = "+vowels);
    }
}