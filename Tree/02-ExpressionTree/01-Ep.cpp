/*
    ^      R-> L
    * /    L->R
    + -    L->R
    Leaves -> Operands
    Internal Nodes -> Operators
    Postfix expression can be easily converted to Tree
*/


#include <iostream>
#include <stack>
#include <string>

/*
    a*b/c+e/f*g+k-x*y
    postfix: ab*cf/+e/g*k+xy-*-

    Construct a expression tree for : A+(B-C)*D+(E*F)

*/
using namespace std;