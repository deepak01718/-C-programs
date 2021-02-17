#include <stdio.h>

void print_array(int *A,int n){

    for(int i=0;i<n;i++){

        printf("%d  ",A[i]);

    }
}

void bubblesort(int *A,int n){

    int temp;
    int is_sorted=0;

    for(int i=0;i<n-1;i++){

        is_sorted = 1;

        for(int j=0;j<n-i-1;j++){
           
            if(A[j]>A[j+1]){

                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;

            }
        }
    }

    if(is_sorted){
        return;
    }
}


int main(){

    int A[] = {7,11,9,2,17,4};
    int n = 6;
    
    printf("Before sorting.......\n");

    print_array(A,n);

    printf("\nAfter sorting.......\n");

    bubblesort(A,n);

    print_array(A,n);


    return 0;
}