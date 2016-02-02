/* 
    Solution to Euler Problem 4 in C 
*/

#include <stdio.h>
#include <stdlib.h>

int is_palindrome(unsigned int num);

int main(int argc, char **argv) {
     int max_palindrome = 0;
     int a, b, prod;
 
 
    a = 999;
    while (a > 99) {
        b = 999;
        while (b >= a) {
            prod = a*b;
            if (prod > max_palindrome && is_palindrome(prod)) {
                max_palindrome = prod;
                break;
            }
            b--;
        }
        a--;
    }
 
    printf("Answer: %d \n", max_palindrome); // Answer: 906609 
 
    return 0;
}

int is_palindrome(unsigned int num) {
    unsigned int reversed = 0;
    unsigned int original = num;
 
    if (num < 10) return 1;
    if (num % 10 == 0) return 0;
 
    while (num >= 1) {
        reversed = (reversed * 10) + (num % 10);
        num = num/10;
    }
 
    if (original == reversed) return 1;
    else return 0;
}