import java.util.Scanner;

public class MagicNumber { 
    
    static boolean isMagic(long N) 
    { 
        long num = N;
        int digits = 0;
        while(num > 0){
            digits++;
            num = num / 10;
        }
        
        num = N;
        while(true) {
            long remainder = num % 10;
            long division = num / 10;
            num = (long)Math.pow(10, digits - 1) * remainder + division;
            
            if (num == N) break;
            
            if (num % N != 0) return false;
        }
        
        return true;
    } 
  
    public static void main(String[] args) 
    { 
        Scanner in = new Scanner(System.in);
        long N = in.nextLong();
        if (isMagic(N)) 
            System.out.print("Yes"); 
        else
            System.out.print("No"); 
    } 
} 
 
