/*Algorithm
Step 1: START.
Step 2: Declare six integer variables and two integer array as a[100], b[100].
Step 3: Get the number of elements in the array.
Step 4: Get the elements using FOR loop and checkn if the number is divisible by 2.
Step 5: If divisible then increment c.
Step 5: Use nested FOR loop for arranging the array elements in ascending order.
Step 6: Check FOR condition for separating the array elements.
Step 7: Use for loop for printing the sorted odd and even number array
Step 8: STOP.*/

#include <stdio.h>
 
int main()
{
    int a[100],b[100],i,n,j,k,temp,c=0;
    printf("Enter size of the  array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==1)
         c++;
    }
    for(i=0; i<n-1; i++)
    {          
        for(j=0; j<n-i-1; j++)
        {
           if(a[j]>a[j+1])
           {
           	temp=a[j];
           	a[j]=a[j+1];
           	a[j+1]=temp;
		   }
 
        }      
    }   
	
	  k=0;
    j=n-c;
	  for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
        	if(k<n-c)
        	  b[k++]=a[i];
		    }  
		    else
		    {
			    if(j<n)
        	  b[j++]=a[i];
	      }
    }
    printf("\nArray after sorting even and odd elements separately:\n ");
    for(i=0; i<n; i++)
    {
        printf("%d ",b[i]);
    }
    
 }

/*OUTPUT

~/Array/ $ gcc -o ascend ascend.c
~/Array/ $ ./ascend
Enter size of the  array : 5
Enter elements in array : 43
56
78
49
84      

Array after sorting even and odd elements separately:
 56 78 84 43 49*/
