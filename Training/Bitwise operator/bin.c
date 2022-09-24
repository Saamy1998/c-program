/*Algorithm
Step 1: START.
Step 2: Initialize three integer and one integer array.
Step 3: Declare size on integer in bit.
Step 4: Declare the number from user.
Step 5: Assign size of integer in bit mines one to index.
Step 6: Check WHILE condition for converting number to bit, if true goto step 7 else goto step 10.
Step 7: Store lsb of num to bin(array).
Step 8: Decrement index for changing the position in array.
Step 9: Right shift num by 1 to get next set in binary.
Step 10: Print the converted binary value by FOR loop.
Step 11: STOP.*/

#include <stdio.h>

int main()
{
    int num, index, i;
    int j=sizeof(int) * 8;                          // Integer size in bit
    int bin[j];
    printf("Enter any number: ");                   // Input number from user
    scanf("%d", &num);
    index = j - 1;
    while(index >= 0)
    {
        bin[index] = num & 1;                        // Store LSB of num to bin
        index--;                                     // Decrement index
        num >>= 1;                                   // Right Shift num by 1
    }
    printf("Converted binary: ");                    // Print converted binary
    for(i=0; i<j; i++)
    {
        printf("%d", bin[i]);
    }

    return 0;
}

/*OUTPUT
~/New task/ $ gcc -o bin bin.c
~/New task/ $ ./bin
Enter any number: 16
Converted binary: 00000000000000000000000000010000~/New task/ $ ./bin
Enter any number: 5628
Converted binary: 00000000000000000001010111111100~/New task/ $ ./bin
Enter any number: 245672998     
Converted binary: 00001110101001001010110000100110*/
