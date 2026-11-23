#include <stdio.h>
int find(int arr[], int size){
    int largest=arr[0];
    for(int i=0; i<size; i++){
        if(arr[i]>largest)
            largest=arr[i];
    }
    return largest;
}
int main() {
    int n;
    printf("Enter no. of elements:\n");
    scanf("%d", &n);
    int arr[n];

    printf("Enter values:\n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("The largest number in the array is %d", find(arr, n));
    return 0;
}