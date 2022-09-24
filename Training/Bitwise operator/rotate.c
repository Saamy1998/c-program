/*Algorithm for main function
Step 1: START.
Step 2: Initialize two integer.
Step 3: Declare the number from user.
Step 4: Declare the number of rotation from user.
Step 5: Print left rotation by the function leftRotate.
Step 6: Print right rotation by the function rightRotate.
Step 7: STOP.

Algorithm for leftRotate
Step 1: START.
Step 2: Declare the size of integer in bit.
Step 3: Do bitwise or of n<<d with n >>(j - d) for left rotation.
Step 4: Return
Step 5: STOP.

Algorithm for rightRotate
Step 1: START.
Step 2: Declare the size of integer in bit.
Step 3: Do bitwise or of n>>d with n <<(j - d) for right rotation.
Step 4: Return
Step 5: STOP.*/

#include<stdio.h>

int main()                               //Main Function
{
  int n,d;
  printf("Enter any numbers= ");          // Input numbers from user
  scanf("%d", &n);
  printf("Enter the rotation= ");          // Input numbers from user
  scanf("%d", &d);
  printf("Left Rotation of %d by %d is ", n, d);
  printf("%d\n", leftRotate(n, d));
  printf("Right Rotation of %d by %d is ", n, d);
  printf("%d\n", rightRotate(n, d));
  getchar();
}

int leftRotate(int n, unsigned int d)    //Function to left rotate n by d bits
{
    int j=sizeof(int) * 8;               // Integer size in bit
    return (n << d)|(n >> (j - d));      // In n<<d, last d bits are 0. To put first 3 bits of n at last, do bitwise or of n<<d with n >>(j - d)
}


int rightRotate(int n, unsigned int d)   // Function to right rotate n by d bits
{
    int j=sizeof(int) * 8;               // Integer size in bit
    return (n >> d)|(n << (j - d));      // In n>>d, first d bits are 0. To put last 3 bits of at  first, do bitwise or of n>>d with n <<(j - d)
}




/*OUTPUT
~/New task/ $ gcc -o rotate rotate.c
~/New task/ $ ./rotate
Enter any numbers= 12
Enter the rotation=  2
Left Rotation of 12 by 2 is 48
Right Rotation of 12 by 2 is 3
~/New task/ $ ./rotate
Enter any numbers= 185
Enter the rotation=  5
Left Rotation of 185 by 5 is 5920
Right Rotation of 185 by 5 is -939524091*/
