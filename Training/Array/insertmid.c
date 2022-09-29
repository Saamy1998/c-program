/*Algorithm
Step 1: START.
Step 2: Declare four integer variables.
Step 3: Get the number of elements in the array.
Step 4: Get the elements.
Step 5: Enter the position where you want to insert the element.
Step 6: Enter the value into that poition.
Step 7: Cheak FOR condition.
Step 8: If condition is true goto step 9 otherwise goto step 10.
Step 9: a[i+1]=a[i] and goto step 7.
Step 10: a[pos-1]= value.
Step 11: Print final array after inserting the value
Step 12: STOP.*/


#include<stdio.h>
int main(){
   int a[40],pos,i,size,value;
   printf("Enter no of elements in array=");
   scanf("%d",&size);
   printf("Enter %d elements are:\n",size);
   for(i=0;i<size;i++)                                                        //for loop for getting the elements from user
   {
        scanf("%d",&a[i]);
   }
   printf("Enter the position where you want to insert the element:");        //enter the position of the element to be insert
   scanf("%d",&pos);
   printf("Enter the value into that position:");                             //enter the value to add in the array
   scanf("%d",&value);
   for(i=size-1;i>=pos-1;i--)                                                 //for loop for insert the element and update
   {
        a[i+1]=a[i];
   }
   a[pos-1]= value;
   printf("Final array after inserting the value is\n");                      //prints the final output
   for(i=0;i<=size;i++)
   {
        printf("%d\n",a[i]);
   }

   return 0;
}

/*OUTPUT

~/Array/ $ gcc -o insertmid insertmid.c
~/Array/ $ ./insertmid
Enter no of elements in array=5
Enter 5 elements are:
2
3
4
5
6
Enter the position where you want to insert the element:4
Enter the value into that position:12
Final array after inserting the value is
2
3
4
12
5
6*/
