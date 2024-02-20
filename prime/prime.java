package Algorithm.prime;
import java.util.*;

public class prime{
    public static boolean is_prime(int n){
        int i, sqr;
        sqr = (int)Math.sqrt(n+0.0);
        for(i=2; i<=sqr; i++){
            if(n%i == 0)
                return false;
        }
        return true;
    }

    public static void get_prime(int n){
        int[] temp = new int[n];
        int i,j;

        for(i = 2; i<n; i++){
            if(temp[i] == 1)
                continue;
            j=i;
            while((j+=i) < n)
                temp[j] = 1;
        }

        for(i=2; i<n; i++){
            if(temp[i] == 0)
                System.out.print("\t"+i);
        }
    }

    public static void main(String args[]){
        int x;
        Scanner sc = new Scanner(System.in);
        x = sc.nextInt();
        System.out.println("Result 1 is " + is_prime(x));
        System.out.print("Result 2 is ");
        get_prime(x);
        sc.close();
    }
}