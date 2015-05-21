#include "intStack.h"

using namespace datastructure::stack;

intStack::intStack() : _top(0)
{
    _container = new int[128];
}

intStack::~intStack()
{
    delete[] _container;
}

int&
intStack::top()
{
    return _container[_top];
}

bool
intStack::empty()
{
    return _top == 0 ? true : false;
}

void
intStack::push(const int& val)
{
    _container[++_top] = val;
}

void
intStack::pop()
{
    --_top;
}

size_t
intStack::size()
{
    return _top;
}
