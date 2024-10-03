#include <iostream>
#include <stack>
#include <string>
using namespace std;

//"A+B*(C^D-E)"
/*
    operator.push(A) //   //A
    operator.pop(+) //+    //A
    operator.push(B) //+    //AB
    operator.push(*) //+*    //AB
    operator.push(() //+*(    //AB
    operator.push(C) //+*(    //ABC
    operator.push(^) //+*(^    //ABC
    operator.push(D) //+*(^    //ABCD
    operator.push(-) //+*(^    //ABCD
     //+*(-    //ABCD^
     operator.push(E) // +*(-   //ABCD^
     operator.push()) //    //ABCD^E-*+
*/


//A*(B+C/D) - E^F
/*
    output= ABCD/+E*F^-             stack= 
*/

//A+(B*C-(D/E^F)*G)*H
/*
    output= ABC*DEF^/G*-H*+          stack= +*
*/


/*
    Rules: 
    1. Operands are pushed onto the stack as they arrive
    2. If stack is empty or contains a left parenthesis on top push the incoming operators
    3. if incoming symbol is ( push into stack
    4. If incoming symbol is ) pop operators from stack and push into output until a ( is encountered
    5. If incoming operator has higher precedence than top of stack, push it onto stack
    6. If incoming operator has lower precedence than top of stack pop and print 
    6. After scanning the entire expression, pop operators from stack and push into output until stack is empty 
*/

class stac1{
public:
    int data;
    int top;

    stac1() {
        top = -1;
    }
};

int infixToPostfix(string a){

}



int main() {
    string infix = "A+B*(C^D-E)";
    cout << "Postfix: " << infixToPostfix(infix) << endl;
    return 0;
}