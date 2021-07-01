//
//  main.c
//  Basic1
//
//  Created by Sunsky on 2021/6/30.
//

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x[20], y[20], a, sum, p;
    int n, i, j;
    
    printf("Lagrange polynomial interpolation\n");
    printf("Please Enter the number of points to insert :");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the value of x%d =", i);
        scanf("%f", &x[i]);
        printf("Enter the value of y%d =", i);
        scanf("%f", &y[i]);
    }
    printf("\n X \t\t\t Y \n");
    printf("----------------------------\n");
    for (i = 0; i < n; i++)
    {
        printf("%f\t", x[i]);
        printf("%f\n", y[i]);
    }
    printf("\nEnter the value of x for interpolation:");
    scanf("%f", &a);
    sum = 0;

    
    for (i = 0; i < n; i++)
    {
        p = 1.0;
        for (j = 0; j < n; j++)
        {
            if (i != j)
            {
                p = p * (a - x[j]) / (x[i] - x[j]);
            }
            
        }
        sum = sum + y[i] * p;
        

    }
    printf("The numerical sovle(x = %f) is: %f \n", a,sum);
    
    return 0;
}
