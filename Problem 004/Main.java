class Main {
    public static void main(String[] args) {
        int firstNumber, secondNumber, largest = 0;
        
        for(firstNumber = 999; firstNumber >= 111; firstNumber--)
            for(secondNumber = firstNumber; secondNumber >= 111; secondNumber--) {
                int product = firstNumber * secondNumber;
                if(isPalindrome(product))
                    if(product > largest) { largest = product; }                    
            }
        System.out.println(largest);
    }

    static boolean isPalindrome(int num) {
        int temp, reverse = 0;
        for(temp = num; temp != 0; temp /= 10) 
            reverse = (reverse * 10) + (temp % 10);
        if(reverse == num) return true;
        return false;
    }
}

