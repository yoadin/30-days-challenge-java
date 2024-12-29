import java.util.Scanner;

public class solution {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        double meal_cost = sc.nextDouble();
        double tip_percent = sc.nextDouble();
        double tax_percent = sc.nextDouble();
        
        double tax = tax_percent/100 *meal_cost;
        double tip = tip_percent/100 * meal_cost;
        double tot = meal_cost + tax + tip ;
        int t = (int)Math.round(tot);
        
        System.out.println(t);
        sc.close();
    }
}
