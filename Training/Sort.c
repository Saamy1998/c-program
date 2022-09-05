/*Algorithm
Step 1: START.
Step 2: Declare the array elements.
Step 3: Get the number of elements in the array.
Step 4: Get the elements.
Step 5: Check FOR conditions.
Step 6: If the conditions are true then goto step 7 otherwise goto setp 12.
Step 7: If (num[i] > num[j]) is true goto step 8 otherwise goto step 5.
Step 8: Swap the numbers by a=num[i]
Step 10: num[i]=num[j]
Step 11: num[j]=a and goto step 5.
Step 12: Print the ascending order.
Step 13: Check FOR conditions.
Step 14: If the conditions are true then goto step 15 otherwise goto setp 19.
Step 15: If (num[i] < num[j]) is true goto step 16 otherwise goto step 13.
Step 16: Swap the numbers by a=num[i]
Step 17: num[i]=num[j]
Step 18: num[j]=a and goto step 13.
Step 19: Print the decending order.
Step 20: STOP.*/

#include <stdio.h>
int main ()
{
   int num[20];
   int i, j, a, n;
   printf("Enter number of elements in an array\n");    // initialaizing the number of elements in the array
   scanf("%d", &n);
   printf("Enter the elements\n");                      // for loop for inserting the elements
   for (i=0;i<n;++i)
   {
      scanf("%d",&num[i]);
   }
   for (i=0;i<n;++i)                                    // for loop for sorting the elements 
   {
      for (j=i+1;j<n;++j)
      {
         if (num[i] > num[j])                    
         {
            a=num[i];
            num[i]=num[j];
            num[j]=a;
         }
      }
   }
   printf("The numbers in ascending order is:\n");       //printing the ascending oder elements
   for (i=0;i<n;++i)
   {
      printf("%d\n",num[i]);
   }

   for (i=0;i<n;++i)                                    // for loop for sorting the elements 
   { 
      for (j=i+1;j<n;++j)
      {
         if (num[i] < num[j])
         {
            a=num[i];
            num[i]=num[j];
            num[j]=a;
         }
      }
   }
   printf("The numbers in decending order is:\n");      //printing the decending oder elements
   for (i=0;i<n;++i)
   {
      printf("%d\n",num[i]);
   }
   return 0;
}

/*OUTPUT
Enter number of elements in an array
6
Enter the elements
21
59
45
9
72
65
The numbers in ascending order is:
9
21
45
59
65
72
The numbers in decending order is:
72
65
59
45
21
9

Process returned 0 (0x0)   execution time : 20.737 s
Press any key to continue.*/

