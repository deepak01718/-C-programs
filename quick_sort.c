#include <stdio.h>

void print_array(int *A,int n){

    for(int i=0;i<n;i++){

        printf("%d  ",A[i]);
    }
}

int index_partition(int *A,int low,int high){

    int pivot = A[low];
    int i = low+1;
    int j = high;
    int temp;

    do{

        while(A[i]<=pivot){

            i++;
        }

        while(A[i]>pivot){

            j--;
        }

        if(i<j){

            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }


    }
    while(i<j);

    //swap

    temp = A[low];
    A[low] = A[j];
    A[j] = temp;

    return j;
}

void quick_sort(int *A,int low,int high){

    int partition;
    if(low<high){
    partition = index_partition(A,low,high);
    quick_sort(A, low,partition-1 );
    quick_sort(A, partition+1, high);
    }
}

int main(){

    int A[] = {9,4,4,8,7,5,6};
    int n = 7;

    printf("Before sorting.......\n");

    print_array(A,n);

    printf("After sorting.......\n");

    quick_sort(A,0,n-1);

    print_array(A,n);

    return 0;
}