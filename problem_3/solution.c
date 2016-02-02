/* 
    Solution to Euler Problem 3 in C 
*/

#include <stdio.h>

int main(void) {

    long long n=600851475143,prime=0,i;

    for (long long i=3;i*i<=n;i+=2){

      if (n%i==0){

        prime=i;

        while(n%i==0){
            n/=i;
        }
      }

    }

    if (n>1){
        prime=n;
    }

    printf("Answer: %llu\n", prime); // Answer: 6857
    return 0;
}