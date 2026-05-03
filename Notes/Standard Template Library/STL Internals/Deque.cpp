#include <bits/stdc++.h>
using namespace std;

template <typename T>
class MyDeque
{
public:
    T *data;
    size_t frontIndex;
    size_t backIndex;
    size_t capacity;

    // Constructor
    MyDeque() : frontIndex(0), backIndex(0), capacity(4)
    {
        data = new T[capacity];
    }

    // Destructor
    ~MyDeque()
    {
        delete[] data;
    }

    // Resize the deque to a new capacity
    void resize(size_t new_capacity)
    {
        T *new_data = new T[new_capacity];
        size_t current_size = size();
        for (size_t i = 0; i < current_size; ++i)
        {
            new_data[i] = (*this)[i];
        }

        delete[] data;
        data = new_data;
        frontIndex = 0;
        backIndex = current_size;
        capacity = new_capacity;
    }

    // Push element at the front
    void push_front(const T &value)
    {
        if (size() == capacity)
        {
            resize(capacity * 2);
        }
        frontIndex = (frontIndex - 1 + capacity) % capacity;
        data[frontIndex] = value;
    }

    // Push element at the back
    void push_back(const T &value)
    {
        if (size() == capacity)
        {
            resize(capacity * 2);
        }
        data[backIndex] = value;
        backIndex = (backIndex + 1) % capacity;
    }

    // Pop element from the front
    void pop_front()
    {
        if (empty())
        {
            throw std::out_of_range("Deque is empty");
        }
        frontIndex = (frontIndex + 1) % capacity;
    }

    // Pop element from the back
    void pop_back()
    {
        if (empty())
        {
            throw std::out_of_range("Deque is empty");
        }
        backIndex = (backIndex - 1 + capacity) % capacity;
    }

    // Access element at index using []
    T &operator[](size_t index)
    {
        if (index >= size())
        {
            throw std::out_of_range("Index out of range");
        }
        return data[(frontIndex + index) % capacity];
    }

    // Get the number of elements in the deque
    size_t size() const
    {
        return (backIndex - frontIndex + capacity) % capacity;
    }

    // Check if the deque is empty
    bool empty() const
    {
        return frontIndex == backIndex;
    }
};

int main()
{
    // Example usage
    MyDeque<int> myDeque;

    myDeque.push_back(1);
    myDeque.push_back(2);
    myDeque.push_front(0);

    cout << "Deque size: " << myDeque.size() << endl;

    for (size_t i = 0; i < myDeque.size(); ++i)
    {
        cout << myDeque[i] << " ";
    }
    cout << endl;

    myDeque.pop_back();

    cout << "Deque size after pop_back: " << myDeque.size() << endl;

    for (size_t i = 0; i < myDeque.size(); ++i)
    {
        cout << myDeque[i] << " ";
    }
    cout << endl;
}

