import java.math.*;
import java.util.*;

//using a for loop to multiply a number which is between 1 <= N <= 20


public class loops {
    public static void main(String[] args)  {
        int N;
        Scanner sc = new Scanner(System.in);
        N = sc.nextInt();
        
        for(int i = 1 ; i <= 10;i++){
            int result = N * i;
            System.out.println(N +" x " + i +" = " +result);
        }

        sc.close();
        
    }
}
