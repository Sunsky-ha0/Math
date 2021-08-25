//
//  SelectionSort.c
//  Use selection algorithm to sort pointer array
//
//  Created by Sunsky on 2021/8/2.
//


#include <stdio.h>
#include <string.h>

int main(int agrc,const char * argv[])
{
    void SelectionSort(char * name[],int n);
    void Output(char * name[],int n);
    char * name[]={"Tensorflow","Pytorch","Keras","JAX","Cuda"};
    SelectionSort(name,5);
    Output(name,5);
    return 0;
}

void SelectionSort(char * name[],int n)
{
    int i,j,k;
    char * p;
    for (i=0;i<n-1;i++)
    {
        k=i;
        for (j=i+1;j<n;j++)
            if (strcmp(name[k],name[j])>0) k=j;
        if (k!=i)
        {
            p = name[i];
            name[i]=name[k];
            name[k]=p;
        }
    }
}

void Output(char * name[],int n)
{
    int i;
    for (i=0;i<n;i++)
        printf("%s\n",name[i]);
}



