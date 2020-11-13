#include <stdio.h>

int nextPrime(int num);
int isPrime(int num);

int main() {
    int input;
    printf("Enter any number: ");
    scanf("%d", &input);
    printf("The prime after %d is %d\n", input, nextPrime(input));
}

int nextPrime(int num) {
    while(1)
        if(isPrime(++num))
            return num;
}

int isPrime(int num) {
    int i;
    for(i = 2; i < num / 2; i++) 
        if (num % i == 0)
            return 0;
    return 1;
}
