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

Let's get to the problem.

### Java 
Java required long datatype to fit the input.