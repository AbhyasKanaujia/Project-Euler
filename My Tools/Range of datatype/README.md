# Range of Datatype

The origin of the problem is due to projec euler problem 3. To quote my notes:
> That number that I need to work on seems to be too big. I don't know if my `int` data type will be able to fit it or not. I will need somthing that will help me find the size of my integer datatype before I should jump into the problem.

One solution that I found on [this page](https://www.sanfoundry.com/c-program-print-range/) tells me to use `sizeof` operator available to me in C/C++ which returns the size in byte. Then to conver this into bits and use the formula $-2^{n-1}$ to $2^{n-1}-1$ to get the range for signed and $2^n$ for unsigned data type.

Run the `main.cpp` to see the size integer and long integer.

main.cpp:

```cpp
#include <stdio.h>
#include <math.h>

int main() {
    printf("Size of signed int is %ld bytes\n",sizeof(int));
    printf("It is represnted using %ld bits\n", sizeof(int) * 8);
    printf("It ranges from %.0f to %.0f\n", 
        -1 * pow(2, sizeof(int) * 8 - 1), pow(2, sizeof(int) * 8 - 1) - 1);

    printf("\n");
    printf("Size of signed long int is %ld bytes\n",sizeof(long int));
    printf("It is represnted using %ld bits\n", sizeof(long int) * 8);
    printf("It ranges from %.0f to %.0f\n", 
        -1 * pow(2, sizeof(long int) * 8 - 1), pow(2, sizeof(long int) * 8 - 1) - 1);
}
```