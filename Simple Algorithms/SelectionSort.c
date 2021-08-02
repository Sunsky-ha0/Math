//
//  SelectionSort.c
//  StandardLibrary
//
//  Created by Sunsky on 2021/8/2.
//


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Swap(int *m, int *n)
{
//    To swap elements
    int temp;
    
    temp = *m;
    *m = *n;
    *n = temp;
}
//int[] foo, bar;  both are arrays
void SelectionSort(int arr[], int size)
{
    int i,j;
    int medi;
    
    for (i = 0; i < size-1; i++)
    {
        medi = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[medi] > arr[j])
                medi = j;
        }
        Swap(arr+i,arr+medi);
    }
}

int main(void)
{
    int i,l;
    int *Array =NULL;
    
    printf("Please enter the length of array:\n");
    scanf("%d",&l);
    
    Array = realloc(Array,sizeof(int)*l);
    
    srand((unsigned int)time(NULL));
    for (i = 0; i < l; i++)
        *(Array+i) = rand()%100;
    
    SelectionSort(Array, l);
    
    for (i = 0; i < l; i++)
        printf("%d\n",Array[i]);
    
    return 0;
}



