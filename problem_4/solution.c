/* 
    Solution to Euler Problem 4 in C 
*/

#include <stdio.h>
#include <stdlib.h>

int palindrome(unsigned int num);

int main(int argc, char **argv) {
     int max_palindrome = 0;
     int a, b, prod;
 
 
    a = 999;
    while (a > 99) {
        b = 999;
        while (b >= a) {
            prod = a*b;
            if (prod > max_palindrome && palindrome(prod)) {
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

int palindrome(unsigned int n) { // Checks if a number is a palindrome
    unsigned int r = 0; // place holder for the reversed number
    unsigned int o = n; // save the original number
 
    if (n < 10) return 1; // all single digit numbers are palindromes
    if (n % 10 == 0) return 0; // meaning the number would end in a zero and not be a palindrome
 
    while (n >= 1) {
        r = (r * 10) + (n % 10); // by using the modulus operator we can obtain the digits
        n = n/10; // remove the digit we just obtained
    }

    /* for example 
    r = 0
    n = 1001 

    r = (0 * 10) + (1001 % 1)= 1
    n = 1001/10 = 100

    r = (1 * 10) + (100 % 0) = 10
    n = 100/10 = 10

    r = (10 * 10) + (10 % 0) = 100
    n = 10/10 = 1

    r = (100 * 10) + (1 % 0) = 1001

    1001 is a palindrome
    */
 
    if (o == r) return 1;
    else return 0;
}