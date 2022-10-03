#include <stdio.h>
#include <string.h>

int sum();
int swap();
int printArray();
int copyArray();
int reverseArray();
int search();
int matrix();
int addMatrix();
int multiMatrix();
int stringLenght();
int stringConcatenation();
int stringCompare();
int stringReverse();
int sort();
int* multipReturn(int n, int *arr);


int main()
{
    char arr;
    printf("Enter the option: ");
    scanf("%c",&arr);
    switch (arr)
    {
        case 'a':
            sum();
            break;

        case 'b':
            swap();
            break;

        case 'c':
            printArray();
            break;

        case 'd':
            copyArray();
            break;

        case 'e':
            reverseArray();
            break;

        case 'f':
            search();
            break;

        case 'g':
            matrix();
            break;

        case 'h':
            addMatrix();
            break;

        case 'i':
            multiMatrix();
            break;

        case 'j':
            stringLenght();
            break;

        case 'k':
            stringConcatenation();
            break;

        case 'l':
            stringCompare();
            break;

        case 'm':
            stringReverse();
            break;

        case 'n':
            sort();
            break;

        case 'o':
            {
                int i, n, arr[100];
                printf("Enter nth number: ");
                scanf("%d", &n);
                multipReturn(n,arr);
                printf("First n Even numbers: ");
                for(i=0;i<n;i++)
                    printf("%d ", arr[i]);
            }
    }

}

int sum()
{
    int num1, num2;
    int *p, *q;
    printf("Entert two numbers for addition: ");
    scanf("%d %d",&num1, &num2);
    p = &num1;
    q = &num2;
    printf("Addition of two number is: %d", *p+*q);

}

int swap()
{
    int num1, num2, temp;
    int *p, *q;
    printf("Enter two numbers for swapping: ");
    scanf("%d %d",&num1, &num2);
    p = &num1;
    q = &num2;
    printf("Befor swapping of two number num1 and num2 is: %d, %d",*p, *q);
    temp = *p;
    *p = *q;
    *q = temp;
    printf("\nAfter swapping of two number num1 and num2: %d, %d",*p, *q);
}

int printArray()
{
    int arr[100];
    int n, i;
    int *p =arr;
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("Enter elements in array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",p);
        p++;
    }
    p = arr;
    printf("Array elements are: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",*p);
        p++;
    }
}

int copyArray()
{
    int arr1[100], arr2[100];
    int n, i;
    int *p = arr1, *q=arr2, *a;
    printf("Enter array size: ");
    scanf("%d",&n);
     printf("Enter elements in array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", p);
        p++;
    }
    p = arr1;
    a = &arr1[n-1];
    while(p<=a)
    {
        *q = *p;
        p++;
        q++;
    }
    p=arr1;
    q=arr2;
    printf("After copying the array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",*q);
        q++;
    }
}

int reverseArray()
{
    int arr[100];
    int n, i;
    int *p =arr;
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("Enter elements in array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",p);
        p++;
    }
    p = arr;
    printf("Array elements are: ");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",*p+i);
    }
}

int search()
{
    int arr[100];
    int *p = arr;
    int n, i, a, index = -1;
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("Enter elements in array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",p);
        p++;
    }
    p = arr;
    printf("Enter the search element: ");
    scanf("%d", &a);
    for(i=0;i<n;i++)
    {
        if(*p==a)
        {
            index = i;
            break;
        }
        else
        {
            p++;
        }
    }
    if(index == -1)
    {
        printf("%d does not exists in array.", a);
    }
    else
    {
        printf("%d is found at %d position.", a, index);
    }
}

int matrix()
{
    int arr[100][100];
    int r, c, i, j;
    int *p[100][100];
    printf("Enter number of rows and columns size: ");
    scanf("%d %d",&r, &c);
    printf("Enter elements in array: ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d", &arr[i][j]);
        }

    }
    //p = arr;
    printf("Matrix array elements are:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            p[i][j] = &arr[i][j];
            printf("%d ", *p[i][j]);
        }
        printf("\n");
    }
}

int addMatrix()
{
    int arr1[100][100], arr2[100][100], arr3[100][100];
    int r, c, i, j;
    int *p[100][100];
    printf("Enter number of rows and columns size of arr1: ");
    scanf("%d %d",&r, &c);
    printf("Enter elements of arr1: ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter number of rows and columns size of arr2: ");
    scanf("%d %d",&r, &c);
    printf("Enter elements of arr2: ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    //p = arr;
    printf("Matrix array elements are:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
            p[i][j] = &arr3[i][j];
            printf("%d\t", *p[i][j]);
        }
        printf("\n");
    }
}

int multiMatrix()
{
    int arr1[100][100], arr2[100][100], arr3[100][100];
    int r, c, i, j;
    int *p[100][100];
    printf("Enter number of rows and columns size of arr1: ");
    scanf("%d %d",&r, &c);
    printf("Enter elements of arr1: ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter number of rows and columns size of arr2: ");
    scanf("%d %d",&r, &c);
    printf("Enter elements of arr2: ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    //p = arr;
    printf("Matrix array elements are:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            arr3[i][j] = arr1[i][j] * arr2[i][j];
            p[i][j] = &arr3[i][j];
            printf("%d\t", *p[i][j]);


        }
        printf("\n");
    }
}

int stringLenght()
{
    char arr[100];
    int n, i;
    char *p=arr;
    printf("Enter string in array: ");
    scanf("%s", arr);
    while (*p != '\0')
    {
      n++;
      p++;
    }
    printf("The length of the given string %s is : %d", arr, n);
}

int stringConcatenation()
{
    char arr1[100], arr2[100];
    int n, i=0, j=0;
    char *p, *q;
    printf("Enter string in array1: ");
    scanf("%s", arr1);
    printf("Enter string in array2: ");
    scanf("%s", arr2);
    p = arr1;
    q = arr2;
    while (arr1[i] != '\0')
    {
      p++;
      i++;
    }
    while (arr2[j] != '\0')
    {
      *p = *q;
      p++;
      q++;
      j++;
    }

    printf("The concatenation of the given string is : %s", arr1);
}

int stringCompare()
{
    char arr1[100], arr2[100];
    int n, i=0, j=0;
    char *p, *q;
    printf("Enter string in array1: ");
    scanf("%s", arr1);
    printf("Enter string in array2: ");
    scanf("%s", arr2);
    p = arr1;
    q = arr2;
    while (*p == *q)
    {
        if(*p == '\0' || *q == '\0')
            break;
        p++;
        i++;
    }
    if( *p == '\0' && *q == '\0' )
    {
       printf("Both Strings Are Equal.");
    }
    else
    {
        printf("Both Strings Are Not Equal.");
    }
}

int stringReverse()
{
    char arr1[100], arr2[100];
    int n, i=0, j=0;
    char *p, *q;
    printf("Enter string in array1: ");
    scanf("%s", arr1);
    p = arr1;
    q = arr2;
    while (*p)
    {
        p++;
        i++;
    }
    while(i>=0)
    {
        p--;
        *q = *p;
        q++;
        i--;
    }
    *q = '\0';
    printf("Reverse of the string is: %s",arr2);
}

int sort()
{
    int arr[100];
    int n, i, j, temp;
    int *p = arr;
    printf("Enter Array size: ");
    scanf("%d",&n);
    printf("Enter elements in array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(*(p + j) > *(p + i))
            {
              temp = *(p + i);
              *(p + i) = *(p + j);
              *(p + j) = temp;
            }
        }
    }
    printf("Sorted Array Elements Ascending order using Pointer: ");
	for(i=0;i<n;i++)
	{
		printf("%d  ", *(p + i));
	}

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(*(p + j) < *(p + i))
            {
              temp = *(p + i);
              *(p + i) = *(p + j);
              *(p + j) = temp;
            }
        }
    }
    printf("\nSorted Array Elements Descending order using Pointer: ");
	for(i=0;i<n;i++)
	{
		printf("%d  ", *(p + i));
	}
}

int* multipReturn(int n, int *arr)
{
    int i;

    for(i=0;i<n;i++)
    {
        arr[i] = 2*(i+1);
    }

    return arr;

}
