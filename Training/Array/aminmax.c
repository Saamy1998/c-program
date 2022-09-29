/*Algorithm
Step 1: START.
Step 2: Initialize four integer as N, i, min, max and one array as arr[100].
Step 3: Declare the size of array in N from user.
Step 4: Declare the array element from the user usinf FOR loop.
Step 5: Assign function maximum(int array[], int index, int len) to max and function minimum(int array[], int index, int len) to min.
Step 6: Print the maximum and minimum element of array element.
Step 7: STOP.

Algorithm maximum(int array[], int index, int len)
Step 1: START.
Step 2: Initialize integer as max.
Step 3: Check IF the array index is in the array length
Step 4: Check IF condition,the array index is greater then the next array index element.
Step 5: If it is true then return array index else return the next array index element.
Step 6: Call function maximun and assign to max
Step 7: Check IF condition, the array index element is greater then the max.
Step 8: If it is true then return array index else return max.
Step 9: STOP.

Algorithm minimum(int array[], int index, int len)
Step 1: START.
Step 2: Initialize integer as max.
Step 3: Check IF the array index is in the array length
Step 4: Check IF condition,the array index is lesser then the next array index element.
Step 5: If it is true then return array index else return the next array index element.
Step 6: Call function minimum and assign to min
Step 7: Check IF condition, the array index element is lesser then the max.
Step 8: If it is true then return array index else return min.
Step 9: STOP.*/

#include <stdio.h>

int maximum(int array[], int index, int len);                       // Function declarations 
int minimum(int array[], int index, int len);

int main()
{
    int array[100], N, max, min;
    int i;
    printf("Enter size of the array: ");                            // Input size and elements of array
    scanf("%d", &N);
    printf("Enter %d elements in array: ", N);
    for(i=0; i<N; i++)
    {
        scanf("%d", &array[i]);
    }
    max = maximum(array, 0, N);
    min = minimum(array, 0, N);
    printf("Minimum element in array = %d\n", min);
    printf("Maximum element in array = %d\n", max);

    return 0;
}

int maximum(int array[], int index, int len)                    // Recursive function to find maximum element in the given array.
{
    int max;
    if(index >= len-2)                                          
    {
        if(array[index] > array[index + 1])
            return array[index];
        else
            return array[index + 1];
    }
    max = maximum(array, index + 1, len);                      // Recursively call maximum to find maximum element in the array from current index.
    if(array[index] > max)                                     // Compare the current array element with maximum element 
        return array[index];
    else
        return max;
}

int minimum(int array[], int index, int len)                   // Recursive function to find minimum element in the given array.
{
    int min;
    if(index >= len-2)
    {
        if(array[index] < array[index + 1])
            return array[index];
        else
            return array[index + 1];
    }
    min = minimum(array, index + 1, len);                       // Recursively call minimum to find minimum element in the array from current index.
    if(array[index] < min)                                      // Compare the current array element with minium element 
        return array[index];
    else
        return min;
}

/*OUTPUT

~/Function/ $ gcc -o aminmax aminmax.c
~/Function/ $ ./aminmax
Enter size of the array: 4
Enter 4 elements in array: 23
54
3
68
Minimum element in array = 3
Maximum element in array = 68
~/Function/ $ ./aminmax
Enter size of the array: 5
Enter 5 elements in array: 23
65
48
76
34
Minimum element in array = 23
Maximum element in array = 76*/
