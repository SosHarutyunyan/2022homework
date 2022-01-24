#include "queue_c.h"

template <typename X>
void queue<X>::push(X first)
{
    m_d.push_front(first);
}

template <typename X>
void queue<X>::pop()
{
    m_d.pop_front();
}

template <typename X>
void queue<X>::print()
{
    int size = m_d.size();
    for (int i = 0; i < size; i++)
    {
        std::cout << m_d[i] << " ";
    }
}