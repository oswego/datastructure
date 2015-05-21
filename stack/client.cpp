#include <iostream>
#include "intStack.h"

using namespace std;
using namespace datastructure::stack;

int main()
{
    intStack stack;
    for (int i = 1; i <= 10; i++)
    {
        stack.push(i);
    }

    cout << stack.size() << endl;

    stack.pop();
    cout << stack.top() << endl;
    stack.pop();
    cout << stack.top() << endl;
    stack.pop();
    cout << stack.top() << endl;
    stack.push(33);
    stack.push(66);
    cout << stack.size() << endl;
    cout << stack.top() << endl;

    return 0;
}
