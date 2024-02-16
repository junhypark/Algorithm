package Algorithm.euclid;
import java.util.*;

public class euclid{
    public static int gcd(int u, int v){
        int temp;
        while(u!=0){
            if(u < v){
                temp = v;
                v = u;
                u = temp;
            }
            u -= v;
        }
        return v;
    }
    
    public static int gcd_mod(int u, int v){
        int temp;
        while(u!=0){
            if(u < v){
                temp = v;
                v = u;
                u = temp;
            }
            u %= v;
        }
        return v;
    }

    public static void main(String args[]){
        int u;
        int v;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter two positive integers");
        u = sc.nextInt();
        v = sc.nextInt();
        System.out.println("The result is " + gcd(u,v));
        System.out.println("Enter two positive integers");
        u = sc.nextInt();
        v = sc.nextInt();
        System.out.println("The result is " + gcd_mod(u,v));
        sc.close();
    }
}