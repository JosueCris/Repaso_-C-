#include <iostream>
#define size 5
using namespace std;

template <class E>
class Stack
{
private:
    int index;
    E storage[];

public:
    Stack();
    int get_index();
    int is_empty();
    int is_full();
    int push(E);
    E pop();
    void seek();
};

template <class E>
Stack<E> :: Stack()
{
    this->index = 0;
    this->storage[size];
}

template <class E>
int Stack<E> :: get_index()
{
    return index;
}

template <class E>
int Stack<E> :: is_empty()
{
    if(this->index == 0)
        return 1;
    return 0;
}

template <class E>
int Stack<E> :: is_full()
{
    if(this->index == size)
        return 1;
    return 0;
}

template <class E>
int Stack<E> :: push(E data)
{
    if(this->is_full())
    {
        cout << "Stack Overflow !!!" << endl;
        return 0;
    }
    this->storage[this->index] = data;
    this->index++;

    return 1;
}

template <class E>
E Stack<E> :: pop()
{
    if(this->is_empty())
    {
        cout << "Stack Underflow !!!" << endl;
        return 0;
    }
    return this->storage[--(this->index)];
}

template <class E>
void Stack<E> :: seek()
{
    for (int i=this->index-1; i>-1; i--)
        cout << "[" + this->storage[i] + "]" << endl;
    
}