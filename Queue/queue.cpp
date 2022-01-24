#include "queue_f.h"

int main()
{
    double x;
    queue<double> ob;

    for (int i = 0; i < 10; i++)
    {
        x = rand() % 10;
        ob.push(x);
    }
    ob.print();
    for (int i = 0; i < 4; i++)
    {
        std::cout << std::endl;
        ob.pop();
        ob.print();
    }
}