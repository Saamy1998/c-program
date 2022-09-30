/*Algorithm
Step 1: START.
Step 2: Declare five integer variables and integer array as a[100].
Step 3: Get the number of elements in the array.
Step 4: Get the elements using FOR loop.
Step 5: Get the rotation count from user.
Step 5: Use nested FOR loop for rotating the array to right size.
Step 6: Print the array after rotation.
Step 7: STOP.*/

#include <stdio.h>
 
int main()
{
    int a[100],i,n,j,k,temp;
    printf("Enter size of the  array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("How many times right rotate : ");
    scanf("%d", &k);
     
    for(i=0; i<k; i++)
    {
        temp=a[n-1];
        for(j=n-1; j>0; j--)
        {
           a[j]=a[j-1];
		}
 
         a[j]=temp;
        
    }
    printf("Array elements after right rotate  : ");
 
    for(i=0; i<n; i++)
    {
       printf("%d ",a[i]);
    }
    
 }

/*OUTPUT

~/Array/ $ gcc -o right right.c
~/Array/ $ ./right
Enter size of the  array : 8
Enter elements in array : 1
2
3
4
5
6
7
8
How many times right rotate : 4
Array elements after right rotate  : 5 6 7 8 1 2 3 4*/
