#include "stack_c.h"

template <typename T>
void stack<T>::push_end(T last)
{
    m_v.push_back(last);
}

template <typename T>
void stack<T>::delete_end()
{
    m_v.pop_back();
}

template <typename T>
void stack<T>::print()
{
    for (int i = 0; i < m_v.size(); i++)
    {
        std::cout << m_v[i] << " ";
    }
}