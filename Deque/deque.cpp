#include "deque_f.h"

int main()
{
    deque<int> ob;

    for (int i = 0; i < 10; i++)
    {
        ob.push_end(i);
    }
    ob.print();
    std::cout << std::endl;
    ob.pop_end();
    ob.print();
    std::cout << std::endl;
    ob.pop_start();
    ob.print();
    std::cout << std::endl;
    ob.push_start(55);
    ob.print();
    std::cout << std::endl;
    ob.push_end(55);
    ob.print();
    std::cout << std::endl;
}