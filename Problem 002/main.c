#include<stdio.h>
void main() {
    int a = 1, b = 2, c = 0, sum = 0;
    while(a < 4000000) {
        if(a % 2 == 0) 
            sum += a;
        c = a + b;
        a = b; 
        b = c;
    }
    printf("Sum of the even-valued terms in he Fibonacci sequence whose values do not exceed four million is %d", sum);
}
