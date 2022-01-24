#include "stack_f.h"

int main()
{
    stack<int> ob;
    ob.push_end(14);
    ob.push_end(2);
    ob.print();
    std::cout << std::endl;
    ob.delete_end();
    ob.print();
    std::cout << std::endl;
}