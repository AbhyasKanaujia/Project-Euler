class Main {
    public static void main(String[] args) {
        System.out.println(sumOfMultiples(5) + sumOfMultiples(3) - sumOfMultiples(15));
    }

    static int sumOfMultiples(int n) {
        int limit = 999 / n;
        return n * (limit * (limit + 1)) / 2;
    }
}
/*
 * class main { public static void main(String[] args) { int sum = 0; for(int i
 * = 1; i < 1000; i++) if(i % 3 == 0 || i % 5 == 0) sum += i;
 * System.out.println("The sum of all multiples of 3 or 5 below 1000 is: " +
 * sum); } }
 */