#include<stdio.h>
void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void selectionsort(int *a , int n){
    int indexomin;
    for (int i = 0; i < n-1; i++){
        indexomin=i;
        for (int j = i+1; j < n; j++)
        {
                if (a[j] < a[indexomin])
                {
                    indexomin = j ;
                }
                
        }
        int temp;
        temp = a[i];
        a[i]=a[indexomin];
        a[indexomin]=temp;
        

    }
    

}


int main(){
    // int A[] = {12, 54, 65, 7, 23, 9};
    int A[] = {1, 2, 5, 6, 12, 54, 625, 7, 23, 9, 987};
    // int A[] = {1, 2, 3, 4, 5, 6};
    int n = 11;
    printArray(A, n); // Printing the array before sorting
    selectionsort(A, n); // Function to sort the array
    printArray(A, n); // Printing the array before sorting
    return 0;
}
