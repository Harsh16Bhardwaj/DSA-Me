//Find the correct position of the element in the sorted array
//Time Complexity: O(n^2)
//Think about the insertion, after each insertion, the array is sorted up to that point
//Then add the next element at the correct position

#include<iostream>
using namespace std;

// Add unsorted elements to sorted array at the correct index

void print(int arr[]){
   for (int i = 0; i < 100;i++)
        cout << arr[i] << " ";
}

void IS(int arr[]){
    for(int i=1;i < 100;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j] == key){
            
        }
    }
}