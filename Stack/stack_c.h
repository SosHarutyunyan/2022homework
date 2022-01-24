#include <iostream>
#include <vector>

#ifndef _STACK_
#define _STACK_

template <typename T>
class stack
{
private:
    std::vector<T> m_v;

public:
    void push_end(T last);
    void delete_end();
    void print();
};

#endif //_STACK_