/* 
    Solution to Euler Problem 1 in C 
*/
    
#include <stdio.h>

int main(int argc, char **argv){

    int i,s=0; // s is the running sum of multiples of 3 and 5

    for(i=0;i<1000;i++){
        if((i%5==0)||(i%3==0)){ // checking divisibility by 3 or 5
            s+=i; // tallying sum
        }
    }

    printf("Answer: %i\n",s); // Answer: 233168

    return 0;
}