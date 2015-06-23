#include "myvector.h"
#include <iostream>
using namespace std;
using namespace FrankZhang;

int main()
{
    // case 1, int
    vector<int> v1;
    for (int i = 1; i <= 10; ++i)
    {
        v1.push_back(i);
    }

    cout << v1[0] << endl;

    // case 2, char
    vector<char> v2;
    char c[] = {'a','b','c','d','e'};
    for (int i = 0; i < 5; ++i)
    {
        v2.push_back(c[i]);
    }

    cout << v2[0] << endl;

    return 0;
}

