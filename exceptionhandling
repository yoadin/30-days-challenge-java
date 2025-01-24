import java.util.InputMismatchException;
import java.util.Scanner;

public class DivisionTrial {
    public static void main(String[]args){
       Scanner sc = new Scanner(System.in);
       try {
           System.out.println("Enter the first number: ");
           int num1;
           num1 = sc.nextInt();
           System.out.println("Enter the second number: ");
           int num2;
           num2 = sc.nextInt();
           double result = num1/num2;
           System.out.println(num1+ " / "+num2 + " = "+ result);
       }
       catch (ArithmeticException a){
           System.out.println("0 isn't allowed");
           System.out.println("Please Enter valid number");
       }
       catch (InputMismatchException a){
           System.out.println("Please enter only number!!");
       }
       catch (Exception a){
           System.out.println("Some things are wrong!!");
       }
       finally {
           sc.close();
       }
    }
}
