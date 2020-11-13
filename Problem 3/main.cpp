#include <stdio.h>

long int nextPrime(long int current);
int isPrime(long int num);

int main() {
    long int N, prime, largest;

    printf("Enter N: ");
    scanf("%ld", &N);

    for(prime = 2; prime <= N/2; prime = nextPrime(prime)) {
        if(N % prime == 0)
            largest = prime;
    }
}

long int nextPrime(long int current) {
    while(1)
        
}
