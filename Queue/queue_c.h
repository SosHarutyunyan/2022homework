#ifndef _QUEUE_
#define _QUEUE_

#include <iostream>
#include <deque>

template <typename X>
class queue
{
private:
    std::deque<X> m_d;

public:
    void push(X first);
    void pop();
    void print();
};

#endif //_QUEUE_