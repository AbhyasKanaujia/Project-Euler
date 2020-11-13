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