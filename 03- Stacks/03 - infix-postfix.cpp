#include <iostream>
#include <stack>
#include <string>
using namespace std;

//"A+B*(C^D-E)"
//A B C D ^ E - * +




int main() {
    string infix = "A+B*(C^D-E)";
    cout << "Postfix: " << infixToPostfix(infix) << endl;
    return 0;
}