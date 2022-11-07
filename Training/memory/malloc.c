#include <stdio.h>
#include <stdlib.h>

int main()
{
   int *ptr1, *ptr2, i, n, m, ans;
   printf("Enter the size: ");
   scanf("%d",&n);
   ptr1=(int*)malloc(n*sizeof(int));
   //ptr2=(int*)calloc(n,sizeof(int));
   for(i=0;i<n;i++)
   {
       ptr1[i]=i+1;
   }
   for(i=0;i<n;i++)
   {
       printf("%d",ptr1[i]);
   }
   printf("\nWant to reallocat memory size(1/0): ");
   scanf("%d",&ans);
   if(ans==1)
   {
       //ptr1=realloc(n,sizeof(int));
       printf("Enter the reallocat size: ");
       scanf("%d",&m);
       ptr1=realloc(ptr1,m*sizeof(int));
       for(i=n;i<m;i++)
       {
           ptr1[i]=i+1;
       }
       for(i=0;i<m;i++)
       {
           printf("%d",ptr1[i]);
       }
   }
   else
   {
       for(i=0;i<n;i++)
       {
           printf("%d",ptr1[i]);
       }
   }
   
}
