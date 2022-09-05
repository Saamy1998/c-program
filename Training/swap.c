/*Algorithm
Step 1: START.
Step 2: Declare a variable a,b and c as integer.
Step 3: Read two numbers a and b.
Step 4: c=a.
Step 5: a=b.
Step 6: b=a.
Step 7: Print a and b.
Step 8: STOP.*/

#include<stdio.h>
int main(){
    int a,b,c;       /*Declaring the variables*/
    printf("Enter two numbers= ");
    scanf("%d \n%d",&a,&b);
    printf("Values before swapping a=%d and b=%d",a,b);
    c=a;             /* a value is stored in c*/
    a=b;             /* b value is stored in a*/
    b=c;             /* c value is stored in b*/
    printf("\nValues after swapping a=%d and b=%d",a,b);
}

/*OUTPUT
Enter two numbers= 95
87
Values before swapping a=95 and b=87
Values after swapping a=87 and b=95
Process returned 0 (0x0)   execution time : 5.741 s
Press any key to continue.*/
