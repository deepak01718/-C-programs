#include <stdio.h>

void printarray(int *A,int n){

    for (int i = 0; i < n; i++)
    {
        printf("%d  ",A[i]);
    }
    
}

void insertion_sort(int *A,int n){

    int key,j;

    for (int i = 1; i < n; i++)
    {
        key = A[i];
        j = i-1;

        while( j>=0 && key<A[j]){

            A[j+1] = A[j];
            j--;
        }

        A[j+1] = key;

    }
    
}

int main(){

    int A[] = {12,35,13,7,56};
    int n = 5;

    printf("Printing array before sorting......\n");

    printarray(A,n);

    printf("\nPrinting array after sorting......\n");

    insertion_sort(A,n);

    printarray(A,n);

    return 0;
}