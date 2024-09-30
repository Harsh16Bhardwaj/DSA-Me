#include <iostream>
using namespace std;


/*
    Definition of Array
    An array is a collection of elements stored in contiguous memory locations. All elements in an array are of the same data type, and each element can be accessed using an index.

    Key Features of Arrays:
    1. Contiguous Memory: Elements are stored sequentially in memory.
    2. Fixed Size: The size of the array is fixed at the time of creation.
    3. Homogeneous Elements: All elements must be of the same data type (e.g., integers, floats).
    4. Index-Based Access: Accessing any element in an array is done using its index, and the time complexity for access is O(1).

    All Arrray functions take O(n) time complexity except for acessing it takes O(1)
*/


int main(){
    // Declaration and Initialization
    int arr[5] = {1, 2, 3, 4, 5}; // Initializes an array with values
        // Accessing Elements
    cout << arr[0];  // Accesses the first element (output: 1)
    cout << arr[4];  // Accesses the fifth element (output: 5)

    // Other Syntax Validations:
    cout << 0[arr];  // This is valid in C/C++ (output: 1)
    cout << arr[1];  // Equivalent to *(arr + 1)
    // The expression arr[i] is internally converted to *(arr + i).
    // Since *(arr + i) is equivalent to *(i + arr), i[arr] is a valid syntax, though not commonly used.

    /*
        Types of Arrays :
        1. Static Array- size fixed at compile time
        2. Dynamic Array- size change at run time
    */
   int* arr1 =  new int[10];
   int size = sizeof(arr1);

   //Arrya of pointers
   int a=10, b=20, c=30;
   int* arr2[3] = {&a, &b, &c};
   cout << *arr2[3];  //derefrencing


    /*Multi-Dimensional Arrays*/
    int arr3[3][4];  // 3 rows and 4 columns

    int matrix[3][4] = {
    {1, 2, 3, 4},   // Row 1
    {5, 6, 7, 8},   // Row 2
    {9, 10, 11, 12} // Row 3
    //Row Major Order: the elements are stored row by row in memory
    ////-----Address of A[i][j] = Base Address + (i * number_of_columns + j) * element_size----/////
    // SImilarly for Coloumn Major Order 
    // Adress of A[i][j] = Base Address + (j * number_of_rows + i) * element_size----////

};

   
}

// Array Print standard
void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

