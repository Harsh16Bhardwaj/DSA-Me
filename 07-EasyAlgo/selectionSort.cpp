#include <iostream>
using namespace std;

// Steps:
// Start with the first element as the minimum.
// Compare this element to the rest of the elements to find the smallest element.
// Swap the smallest element with the first element.
// Move to the next element and repeat until the list is sorted.

void selectionSort(int arr[], int n){
    for(int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the element at index i
        if(minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}

int main(){
    int arr[] = {10, 11, 23, 25, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    selectionSort(arr, n);
    
    // Output the sorted array
    cout << "Sorted array: \n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
