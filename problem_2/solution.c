/* 
    Solution to Euler Problem 2 in C 
*/

#include <stdio.h>
 
#define UPPER_LIMIT 4000000 // defining a constant 

int main(int argc, char **argv) {

    /*  x,y,z are place holders for the current fib number, fib(n-1) and fib(n-2)
        s is the running sum of even numbers */
    int x = 1, y = 1, z = 1, s = 0;
    while (z <= UPPER_LIMIT) { // continue until z, which isfib(n), greater than the limit
        if (z % 2 == 0){ // check if z is even
            s += z; // if it is even, add it to the sum
        }
        z = x + y; // the current fib number is the last two added together
        x = y; // fib(n-1)
        y = z; // fib(n-2)
    }
 
    printf("Answer: %d\n", s); // Answer: = 4613732
 
    return 0;
}