#include<stdio.h>
void insertionsort(int *a , int n){
int key , j;
for (int i = 0; i < n-1; i++)
{
    key=a[i];
    j=i-1;
    while (j>=0 && a[j]>key){
        a[j+1]=a[j];
        j--;

    }
    a[j+1]=key;



}
}

void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}


int main(){
    // int A[] = {12, 54, 65, 7, 23, 9};
    int A[] = {1, 2, 5, 6, 12, 54, 625, 7, 23, 9, 987};
    // int A[] = {1, 2, 3, 4, 5, 6};
    int n = 11;
    printArray(A, n); // Printing the array before sorting
    insertionsort(A, n); // Function to sort the array
    printArray(A, n); // Printing the array before sorting
    return 0;
}
