import java.util.Scanner;
class LargestPrimeFactor {
    public static void main(String[] args) {
        long num, factor = 2;

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a nuber:");
        
        num = sc.nextLong();

        for(long temp = num; factor <= num / 2 && factor != temp; factor++)
            while(temp % factor == 0 && factor != temp) 
                temp /= factor;

        System.out.println("Largest prime factor of " + num + " is " + factor);
    }
}