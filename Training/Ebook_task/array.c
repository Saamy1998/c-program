/*Algorithm
Step 1: START.
Step 2: Initialize Four integer asc,i,nwhite,nother and one integer array as ndigit[10].
Step 3: Declare 0 to nwhite and nother.
Step 4: Check FOR condition,if it is true goto step 5 else goto step 6.
Step 5: Assign 0 to ndigit[i] and goto step 4.
Step 6: Check WHILE condition (c=getchar())!=EOF),is true then goto step 7 else goto step 10.
Step 7: If c is greater than or equal to '0'(i.e.48) and c is lesser than or equal to '9'(i.e.57),count ndigit[c-'0'] else goto step 8.
Step 8: If c is equal to " " or equal to "\n" or equal to "\t",count nwhite else goto step 9.
Step 9: Count nouther if above both IF condition false.
Step 10: Print the digits in array with FOR condition.
Step 11: Print Nwhite for the space and nother for character otherthen numbers
Step 12: STOP.*/

#include <stdio.h>
 /* count digits, white space, others */
int main()
 {
 int c, i, nwhite, nother;                         //Initialize integer
 int ndigit[10];                                   //Initialize integer array
 nwhite = nother = 0;                              //Declare 0 to nwhite and nother
 for (i = 0; i < 10; ++i)             // for loop for assign 0 to array of ndigit[0] to ndigit[9]
   ndigit[i] = 0;
 while ((c = getchar()) != EOF)       // to count the number of occurrences of each digit, of space characters (blank, tab, newline), and of all other characters
   if (c >= '0' && c <= '9')
    ++ndigit[c-'0'];
   else if (c == ' ' || c == '\n' || c == '\t')
    ++nwhite;
   else
    ++nother;
   printf("digits =");                   
   for (i = 0; i < 10; ++i)                  //prints the no.of occurrence of each digit
     printf(" %d", ndigit[i]);    
   printf(", white space = %d, other = %d\n", nwhite, nother);             //prints the no. of space and of all other character
 }

/*OUTPUT

~/ $ cd Ebook_Task
~/Ebook_Task/ $ gcc -o array array.c
~/Ebook_Task/ $ ./array
234567 52 9 d32                                               //Ctrl Z in 'Windows' and Ctrl D in 'Linux'
digits = 0 0 3 2 1 2 1 1 0 1, white space = 4, other = 1*/
