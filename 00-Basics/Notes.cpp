//Introduction to DataStructures:

//Data = collection of values  --> Record --> File
// A datastructure is a way to store & organise data efficiently and to perform operations on it.
// Uses : Compilers, DBMS, OS, Data Communication
//Advantages : Reusability, Efficiency, Abstraction

//Primitives : Int, Float, Double, Boolean, Char
//Non-primitives : Array, Files, Lists -> Stack, Queue (linear) // Tree, Heap, Graph (Non-linear) //


//Abstract Datatype : We are not concerend about the internal interface we directly use them as per our needs. Without knowing implementation we use them.



//Introduction to Algorithms :

//Algorithm : A finite set of rules and instructions to perform calculations. The logic solution of the problem. 
//Characteristics : 1. Finite   2. Unambiguous  3. Input    4. Output   5.Effectivness
//Approaches : 1. Brute Force    2. Optimization        3. Satisfisfying 


////////////////////////////////////////////////////////// Algorithm Analysis : //////////////////////////////////////////////////////////////

// 1. Priory Analysis : Before Hand theoretical analysis of the algorithm
// 2. Posterion analysis : After hand analysis of the algorithm with implementation


// **Algorithm complexity : **//
    //--Time complexity--// The Time Complexity of an algorithm/code is not equal to the actual time required to execute a particular code, but the number of times a statement executes. 

// Asymptotic Notations //
/* Best Case - Omega Notation */

#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Hello, world!"<<endl;
}
// The time complexity of the above code is O(1) because it performs a constant number of operations regardless of the input size.
//Rules !----------------------------------------------------------------//
//1. Express the complexity as Big O Notation
//2. Consider the most significant term
//3. Drop Constants
//4. For consectuive statements add the time complexity

/*  O(1): Constant time (no input dependence)
    O(log n): Logarithmic time (e.g., binary search)
    O(n): Linear time (e.g., simple loops over input)
    O(n log n): Log-linear time (e.g., merge sort)
    O(n²): Quadratic time (e.g., nested loops)
    O(2ⁿ): Exponential time (e.g., brute-force solutions)   */