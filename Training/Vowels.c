/*Algorithm
Step 1: START.
Step 2: Declare two integer i,j and character array 'a[100]'.
Step 3: Get string from the user.
Step 4: Cheak the WHILE statement.
Step 5: If the condition is true,then goto step 6 otherwise goto step 8.
Step 6: If a[i] is equal to a,e,i,o,u,A,E,I,O,U then count j otherwise gotostep 7.
Step 7: Count i and goto step 4.
Step 8: Print the vowels count by the valu of j.
Step 9: STOP.*/

#include <stdio.h>
int main()
{
  int i=0,j=0;
  char a[100];

  printf("Enter the string= ");
  gets(a);
  while (a[i] != '\0')
  {
    if (a[i] == 'a' || a[i] == 'A' || a[i] == 'e' || a[i] == 'E' || a[i] == 'i' || a[i] == 'I' || a[i] =='o' || a[i]=='O' || a[i] == 'u' || a[i] == 'U')
    {
        j++;                         /*counts the number of vowels*/
    }
    i++;
  }

  printf("Number of vowels in the string: %d",j);

  return 0;
}

/*OUTPUT
Enter the string= this is a sample
Number of vowels in the string: 5
Process returned 0 (0x0)   execution time : 7.670 s
Press any key to continue.

