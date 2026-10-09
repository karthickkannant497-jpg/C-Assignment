/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int secondLargest(int arr[], int n)
{
    int largest, second_largest;

    if (arr[0] > arr[1])
    {
        largest = arr[0];
        second_largest = arr[1];
    }
    else
    {
        largest = arr[1];
        second_largest = arr[0];
    }

    for (int i = 2; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i];
        }
    }

    return second_largest;
}

int main()
{
    
int n, i;

    printf("Enter array size: ");
    scanf("%d", &n);
int a[n];

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int result = secondLargest(a, n);

    printf("Second largest Element in array = %d\n", result);
    

    return 0;
}

