#ifndef _DEQUE_
#define _DEQUE_

#include <iostream>
#include <vector>

#include "deque_c.h"

template <typename T>
void deque<T>::push_start(T element)
{
    m_vec.resize(m_vec.size() + 1);
    for (int i = m_vec.size() - 1; i > 0; i--)
    {
        m_vec[i] = m_vec[i - 1];
    }
    m_vec[0] = element;
}

template <typename T>
void deque<T>::push_end(T element)
{
    m_vec.push_back(element);
}

template <typename T>
void deque<T>::pop_start()
{
    for (int i = 0; i < m_vec.size(); i++)
    {
        m_vec[i] = m_vec[i + 1];
    }
    m_vec.pop_back();
}

template <typename T>
void deque<T>::pop_end()
{
    m_vec.pop_back();
}

template <typename T>
void deque<T>::print()
{
    for (int i = 0; i < m_vec.size(); i++)
    {
        std::cout << m_vec[i] << " ";
    }
}

#endif //_DEQUE_