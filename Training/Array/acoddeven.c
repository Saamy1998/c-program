/*Algorithm
Step 1: START.
Step 2: Declare four integer variables as size, i, evenCount, oddCount and three integer array as arr[100], even[100], odd[100].
Step 3: Get the number of elements in the array.
Step 4: Get the elements using FOR loop.
Step 5: Assign zero to evenCount and oddCount.
Step 6: Check FOR condition for iterating the element in array.
Step 7: Check IF the current array element is odd or even.
Step 8: If it is odd ,the assigne it to odd array else to even array.
Step 9: Print the odd and even array using function printArray.
Step 10: STOP.*/


#include <stdio.h>

void printArray(int arr[], int len);                         // Function to print array

int main()
{
    int arr[100], even[100], odd[100];
    int evenCount, oddCount;
    int i, size;
    printf("Enter size of the array: ");                     // Input size of the array
    scanf("%d", &size);
    printf("Enter elements in the array: ");                 // Input elements in array
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    evenCount = 0;
    oddCount = 0;
    for(i=0; i<size; i++)
    {
        if(arr[i] & 1)                                       // If arr[i] is odd
        { 
            odd[oddCount] = arr[i];
            oddCount++;
        }
        else
        {
            even[evenCount] = arr[i];
            evenCount++;
        }
    }
    printf("Elements of even array: \n");
    printArray(even, evenCount);
    printf("Elements of odd array: \n");
    printArray(odd, oddCount);

    return 0;
}

void printArray(int arr[], int len)                           //For printing the array
{
    int i;
    printf("Elements in the array: ");
    for(i=0; i<len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/*OUTPUT

~/Array/ $ gcc -o acoddeven acoddeven.c
~/Array/ $ ./acoddeven
Enter size of the array: 10
Enter elements in the array: 23
44
65
78
85
63
28
58
75
39
Elements of even array: 
Elements in the array: 44 78 28 58 
Elements of odd array: 
Elements in the array: 23 65 85 63 75 39*/
