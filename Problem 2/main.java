class main {
    public static void main(String[] args) {
        int a = 1, b = 2, c = 0, sum = 0;
        while(a <= 4_000_000) {
            if(a % 2 == 0) 
                sum += a;
            c = a + b;
            a = b;
            b = c;
        }
        System.out.println("Sum of the even-valued terms in he Fibonacci sequence whose values do not exceed four million is " + sum);
    }
}
