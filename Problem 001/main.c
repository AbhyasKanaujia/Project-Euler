#include <stdio.h>

int sumDivisibleBy(int n);
void main()
{
    printf("%d", sumDivisibleBy(3) + sumDivisibleBy(5) - sumDivisibleBy(15));
}

int sumDivisibleBy(int n)
{
    int limit = 999 / n;
    return n * (limit * (limit + 1)) / 2;
}

/* Previous solution
int main() {
    int sum = 0, i;
    for(i = 1; i < 1000; i++)
        if(i % 3 == 0 || i % 5 == 0)
            sum += i;    
    printf("The sum of all the multiples of 3 or 5 below 1000 is %d", sum);
    return 0;
*/