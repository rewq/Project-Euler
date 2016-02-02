/* 
    Solution to Euler Problem 3 in C 
*/

#include <stdio.h>

int main(int argc, char **argv) {

    long long n=600851475143,prime=0,i; // long long (64 bit int) is needed because 600851475143 requires at least 40 bits

    // 2 is added to the counter i, because primes can only be odd
    for (long long i=3;i*i<=n;i+=2){ // continue until the counter squared is greater than n, the limit (the greatest factor)

      if (n%i==0){ // check if i is a factor of n

        prime=i; // set it as the current prime number

        while(n%i==0){ // check primality
            n/=i; // Divide AND assignment operator
        }
      }

    }

    if (n>1){
        prime=n;
    }

    printf("Answer: %llu\n", prime); // Answer: 6857
    return 0;
}