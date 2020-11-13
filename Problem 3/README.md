# Largest prime factor

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?

[Link to problem on projecteuler.net](https://projecteuler.net/problem=3)

## Notes

That number that I need to work on seems to be too big. I don't know if my `int` data type will be able to fit it or not. I will need somthing that will help me find the size of my integer datatype before I should jump into the problem.

I found a solution for range of variable.

```cpp
printf("long int ranges from %.0f to %.0f\n", 
        -1 * pow(2, sizeof(long int) * 8 - 1), pow(2, sizeof(long int) * 8 - 1) - 1);
        // long int ranges from -9223372036854775808 to 9223372036854775808
```

[Link to full program](../My%20Tools/Range%20of%20datatype/README.md)

I have been studying about factors and primes to solve this problme. I learned that
> Every real integer can be expressed as a product of powers of prime numbers.

Also I realised that the first smallest prime number that divides a given number might be dividing it by the largest prime number. Let me test this right now.
Taking $51$, I can see that the first prime number that divides it is $3$ and it divides $51$ by $17$ which at this point seems to be very lucky.

Let me for example do a $3\times 18$ this gives me $54$. Smallest prime that divides $54$ is $2$. $2$ divides 54 by $27$ which is not prime. Thus was wrong :joy:.

Going further. $27$ can next be divided by $3$. This gives me $9$. Interesting. 

Let me list out prime factors of some random numbers and observe them. 

$15=3\times5\\
19=1\times19\\
20=2^2\times5\\
42=2^3\times3\\
54=2\times3^3\\
1800=2^3\times3^2\times5^2$

Looking at 1800 its clear that dividing by smaller primes gives me nothing. My assumption that dividing by smallest prime will give me the larget prime was wrong because the smallest prime is not multiplied to the larget prime to get the number as in case of $1800$, $2$ is not multiplied to $5$ to get 1800. It is in fact multipled to the product of powers of all other prime factors excluding the one that I just divided.

I dont' think I am able to solve this problem. I think I will use brute for to solve this problem. Let me start with the problem.
