/*Algorithm
Step 1: START.
Step 2: Declare four integer variables.
Step 3: Get the number of elements in the array.
Step 4: Get the elements.
Step 5: Enter the position where you want to insert the element.
Step 6: Enter the value into that poition.
Step 7: Cheak FOR condition.
Step 8: If condition is true goto step 9 otherwise goto step 10.
Step 9: student[i+1]=student[i] and goto step 7.
Step 10: student[pos-1]= value.
Step 11: Print final array after inserting the value
Step 12: STOP.*/


#include<stdio.h>
int main(){
   int a[40],pos,i,size,value;
   printf("Enter no of elements in array=");
   scanf("%d",&size);
   printf("Enter %d elements are:\n",size);
   for(i=0;i<size;i++)
   {
        scanf("%d",&a[i]);
   }
   printf("Enter the position where you want to insert the element:");
   scanf("%d",&pos);
   printf("Enter the value into that position:");
   scanf("%d",&value);
   for(i=size-1;i>=pos-1;i--)
   {
        a[i+1]=a[i];
   }
   a[pos-1]= value;
   printf("Final array after inserting the value is\n");
   for(i=0;i<=size;i++)
   {
        printf("%d\n",a[i]);
   }

   return 0;
}

/*OUTPUT
Enter no of elements in array=4
Enter 4 elements are:
26
54
93
37
Enter the position where you want to insert the element:2
Enter the value into that position:59
Final array after inserting the value is
26
59
54
93
37

Process returned 0 (0x0)   execution time : 21.825 s
Press any key to continue.


Enter no of elements in array=6
Enter 6 elements are:
18
25
95
44
73
83
Enter the position where you want to insert the element:3
Enter the value into that position:92
Final array after inserting the value is
18
25
92
95
44
73
83

Process returned 0 (0x0)   execution time : 22.542 s
Press any key to continue.*/
