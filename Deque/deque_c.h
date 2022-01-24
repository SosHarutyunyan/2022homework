template <typename T>
class deque
{
private:
    std::vector<T> m_vec;

public:
    void push_start(T element);
    void push_end(T element);
    void pop_start();
    void pop_end();
    void print();
};