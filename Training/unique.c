#include <stdio.h>

int main()
{
    int arr[100], freq[100];
    int size, i, j, count;
    printf("Enter size of array: ");                            // Input size of array
    scanf("%d", &size);
    printf("Enter elements in array: ");                        // Input elements in array
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1;                                           // Initially initialize frequencies to -1 
    }
    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])                                // If duplicate element is found
            { 
                count++;
                freq[j] = 0;
            }
        }
        if(freq[i] != 0)                                      // If frequency of current element is not counted
        {
            freq[i] = count;
        }
    }

    printf("Unique elements in the array are: ");           // Print all unique elements of array
    for(i=0; i<size; i++)
    {
        if(freq[i] == 1)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}

/*OUTPUT

~/Array/ $ gcc -o unique unique.c
~/Array/ $ ./unique
Enter size of array: 10
Enter elements in array: 2
4
2
8
5
5
9
3
1
7

Unique elements in the array are: 4 8 9 3 1 7*/
