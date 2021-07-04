//
//  test1.c
//  Basic1
//
//  Created by Sunsky on 2021/7/4.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[]= {12,4,132,55,46,232,789,1,0,98,523,666};
    int n = sizeof(a)/sizeof(a[0]);
    int i,j,k;
    
    for (i = 0;i < n; ++i)
    {
        for (j = i+1; j < n; j++)
        {
            if (a[i]<a[j])
            {
                k = a[j];
                a[j] = a[i];
                a[i] = k;
            }
        }
    }
    
    for (i = 0;i < n; ++i)
    {
        printf("%d\n",a[i]);
    }
    
    
    return 0;
}

