#include<iostream>
using namespace std;

/*
    A B+ Tree is a self-balancing tree data structure that maintains sorted data and allows for efficient insertion, deletion, and search operations. 
    1. More than 2 nodes possible 
    2. Used in DBMS

    Key Properties :
        1. Balanced Structure
        2. Node stores multiple Keys
        3. The internal sotres only key not data
        4. Leaf Nodes store data

            Internal Node: Must have between ⌈d/2⌉ and d children.
            Leaf Node: Must have between ⌈d/2⌉ and d keys.

        B-Tree of order m has following properties-
        1. Every node has m children
        2. Min children -> leaf - 0
        3. Max children ->  leaf - m-1
                            Root - 2
                            Internal - |m/2|
        4. Every node has max (m-1) keys
        5. Min keys : root node - 1
                     leaf nodes - |m/2|-1
                     internal nodes - |m/2|-1

*/