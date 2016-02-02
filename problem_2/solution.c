/* 
    Solution to Euler Problem 2 in C 
*/

#include <stdio.h>
 
#define UPPER_LIMIT 4000000

int main(void) {

    int x = 1, y = 1, z = 1, s = 0;
    while (z <= UPPER_LIMIT) {
        if (z % 2 == 0){
            s += z;
        }
        z = x + y;
        x = y;
        y = z;
    }
 
    printf("Answer: %d\n", s); // Answer: = 4613732
 
    return 0;
}