/*Algorithm
Step 1: START.
Step 2: Declare a integer i and character array 'a[100]'.
Step 3: Get string value from the user.
Step 4: Cheak the FOR statement for Uppercase.
Step 5: If the condition is true,then goto step 6 otherwise goto step 8.
Step 6: a[i]-->a[i]-32 for uppercase.
Step 7: Print the string in uppercase and goto step 4.
Step 8: Cheak the FOR statement for lowercase.
Step 9: If the condition is true,then goto step 10 otherwise goto step 12.
Step 10: a[i]-->a[i]+32 for lowercase.
Step 11: Print the string in lowercase and goto step 8.
Step 12: STOP.*/

#include <stdio.h>
#include <string.h>
int main()
 {
   char a[100];
   int i;
   printf("Enter a string : ");
   gets(a);
   for (i = 0; a[i]!='\0'; i++)                 /*Reads the string character by character*/
   {
      if(a[i] >= 'a' && a[i] <= 'z')            /*Cheaks the character is in lowercase*/
      {
         a[i] = a[i] -32;
      }
   }
   printf("\nString in Uppercase = %s", a);
   i=0;
   for (i = 0; a[i]!='\0'; i++)                 /*Reads the string character by character*/
   {
      if(a[i] >= 'A' && a[i] <= 'Z')            /*Cheaks the character is in uppercase*/
      {
         a[i] = a[i] +32;
      }
   }
   printf("\nString in Lowercase = %s", a);
   return 0;
}


/*OUTPUT
Enter a string : Aravindha Saamy

String in Uppercase = ARAVINDHA SAAMY
String in Lowercase = aravindha saamy
Process returned 0 (0x0)   execution time : 6.765 s
Press any key to continue.*/

