/*Algorithm
Step 1: START.
Step 2: Initialize two integer as lowerLimit and upperLimit
Step 3: Declare the lower limit and upper limit from user.
Step 4: Print the prime numbers by printPrimes function
Step 7: STOP.

Algorithm for printPrimes(int lowerLimit, int upperLimit)
Step 1: START.
Step 2: Check WHILE condition for the number to be in limits.
Step 3: Check IF the number is prime or not by isPrime function.
Step 4: Print the number if it is prime.
Step 5: STOP.

Algorithm for isPrime(int num)
Step 1: START.
Step 2: Initialize an integer as i.
Step 3: Check FOR condition for incrementing i and be in limits.
Step 4: Check IF condition, if the number is divisible by any number other than 1 and self then it is not prime.
Step 5: Returns 1 if the number is prime else 0 if the number is not prime.
Step 5: STOP.*/

#include <stdio.h>

int isPrime(int num);                                              // Function declarations
void printPrimes(int lowerLimit, int upperLimit);

int main()
{
    int lowerLimit, upperLimit;
    printf("Enter the lower and upper limit to list primes: ");
    scanf("%d%d", &lowerLimit, &upperLimit);
    printPrimes(lowerLimit, upperLimit);                            // Call function to print all primes between the given range.
    return 0;
}

void printPrimes(int lowerLimit, int upperLimit)                    // Print all prime numbers between lower limit and upper limit.
{
    printf("All prime number between %d to %d are: ", lowerLimit, upperLimit);
    while(lowerLimit <= upperLimit)
    {
        if(isPrime(lowerLimit))                                     // Print if current number is prime.
        {
            printf("%d, ", lowerLimit);
        }
        lowerLimit++;
    }
}

int isPrime(int num)                                                // Check whether a number is prime or not.
{
    int i;

    for(i=2; i<=num/2; i++)
    {            
        if(num % i == 0)                                           // If the number is divisible by any number other than 1 and self then it is not prime
        {
            return 0;
        }
    }
    return 1;                                                      // Returns 1 if the number is prime
}

/*OUTPUT

~/Function/ $ gcc -o prime prime.c
~/Function/ $ ./prime
Enter the lower and upper limit to list primes: 2
1000
All prime number between 2 to 1000 are: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131,
137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317,
331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491, 499, 503, 509, 521, 523, 541,
547, 557, 563, 569, 571, 577, 587, 593, 599, 601, 607, 613, 617, 619, 631, 641, 643, 647, 653, 659, 661, 673, 677, 683, 691, 701, 709, 719, 727, 733, 739, 743, 751, 757,
761, 769, 773, 787, 797, 809, 811, 821, 823, 827, 829, 839, 853, 857, 859, 863, 877, 881, 883, 887, 907, 911, 919, 929, 937, 941, 947, 953, 967, 971, 977, 983, 991, 997*/
