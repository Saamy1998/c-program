/*Algorithm
Step 1: START.
Step 2: Initialize 4 number such as a,b,c and d.
Step 3: Cheak condition if (a>b) is true then goto step 4 otherwiae step 6.
Step 4: Big = a.
Step 5: Sma = b.
Step 6: Big = b.
Step 7: Sma = a.
Step 8: Cheak condition if (big<c) is true then goto step 7 otherwise step 8.
Step 9: Big = c.
Step 10: Cheak condition if (big<d) is true then goto step 9 otherwise step 10
Step 11: Big = d.
Step 8: Cheak condition if (sma>c) is true then goto step 7 otherwise step 8.
Step 9: Sma = c.
Step 10: Cheak condition if (sma>d) is true then goto step 9 otherwise step 10
Step 11: sma = d.
Step 12: Print big and small
Step 13: STOP.*/

#include <stdio.h>

int main()
{
    int a,b,c,d,big,sma;
    printf("Enter the 4 digits= ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b)
    {
        big=a;
        sma=b;
    }
    else
    {
        sma=a;
        big=b;
    }
    if(big<c)
    {
        big=c;
    }
    if(big<d)
    {
        big=d;
    }
    if(sma>c)
    {
        sma=c;
    }
    if(sma>d)
    {
        sma=d;
    }
    printf("big=%d small=%d",big,sma);

    return 0;
}

/*OUTPUT
Enter the 4 digits= 2
3
4
5
big=5 small=2
Process returned 0 (0x0)   execution time : 4.633 s
Press any key to continue.


Enter the 4 digits= 245
764
423

236
big=764 small=236
Process returned 0 (0x0)   execution time : 10.327 s
Press any key to continue.*/

