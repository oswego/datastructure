#pragma once

namespace datastructure
{
namespace stack
{
typedef unsigned int size_t;
class intStack
{
public:
    intStack();
    ~intStack();
    int& top();
    bool empty();
    void push(const int& val);
    void pop();
    size_t size();
private:
    int _top;
    int* _container;
};

}// end of namespace stack
}// end of namespace datastructure
