/*Algorithm
Step 1: START.
Step 2: Declare the array elements.
Step 3: Get the number of elements in the array.
Step 4: Get the elements.
Step 5: Initialize small = large = a[0]
Step 6: Cheak FOR condition.
Step 7: If condition is true goto step 8 otherwise goto step 12.
Step 8: if(a[i]>large) is true goto step 9 otherwise goto 10.
Step 9: large=a[i] and goto step 10.
Step 10: if(a[i]<small) is true goto step 11 otherwise goto step 6.
Step 11: small=a[i] and goto step 6.
Step 12: Print Small and Large element in the array.
Step 13: STOP.*/

#include <stdio.h>

int main()
{
  int a[50],i,n,large,small;
  printf("\nEnter the number of elements in array= " );      // initialaizing the number of elements in the array
  scanf("%d",&n);
  printf("Input the array elements= ");
  for(i=0;i<n;++i)                                    // for loop for inserting the elements
  {
    scanf("%d",&a[i]);
  }
  large=small=a[0];

  for(i=1;i<n;++i)                                      //for loop for finding the largest and smallest element in the array
  {
    if(a[i]>large)
    {
      large=a[i];
    }
    if(a[i]<small)
    {
      small=a[i];
    }
   }

  printf("The smallest element is %d\n",small);
  printf("The largest element is %d\n",large);

  return 0;
}

/*OUTPUT


Enter the number of elements in array= 6
Input the array elements= 234
987
638
824
392
751
The smallest element is 234
The largest element is 987

Process returned 0 (0x0)   execution time : 27.177 s
Press any key to continue.



Enter the number of elements in array= 9
Input the array elements= 287
948
371
839
401
598
839
299
926
The smallest element is 287
The largest element is 948

Process returned 0 (0x0)   execution time : 46.453 s
Press any key to continue.*/

