import java.io.*;
import java.util.*;
public class Conditonal_statement {


    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        if(n%2!=0){
            System.out.println("Weird");
        }
        else{
            if(2<=n && n<=5){
                System.out.println("Not Weird");
            }
            if (6<=n && n<= 20){
                System.out.println("Weird");
            }
            if(n>20){
                System.out.println("Not Weird");
            }
        }
        sc.close();
    } 
    
}


