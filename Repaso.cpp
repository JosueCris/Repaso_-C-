// Repaso.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <memory>

using namespace std;

class MyClass
{
public:
    MyClass()
    {
        cout << "Constructor invoked . . ." << endl;
    }

    ~MyClass()
    {
        cout << "Destructor invoked . . ." << endl;
    }
};

int main()
{ 
    /*unique_ptr<int> unptr1 = make_unique<int>(10);
    cout << "Value: " << *unptr1 << endl;
    cout << "Memory Address: " << unptr1 << endl;*/

    //unique_ptr<int> unptr2 = unptr1;

    //{
    //    shared_ptr<int> shptr1 = make_shared<int>(10);
    //    cout << "Value 1: " << *shptr1 << endl;
    //    cout << "Memory Address 1: " << shptr1 << endl;
    //    cout << "Pointers Cant: " << shptr1.use_count() << endl << endl;

    //    {
    //        shared_ptr<int> shptr2 = shptr1;
    //        cout << "Value 2: " << *shptr2 << endl;
    //        cout << "Memory Address 2: " << shptr2 << endl;
    //        cout << "Pointers Cant: " << shptr2.use_count() << endl << endl;;
    //    }

    //    cout << "Value 1: " << *shptr1 << endl;
    //    cout << "Memory Address 1: " << shptr1 << endl;
    //    cout << "Pointers Cant: " << shptr1.use_count() << endl << endl;
    //}


    //Example about shared pointers with a class
    /*{
        shared_ptr<MyClass> shptr1 = make_shared<MyClass>();
        cout << "Memory Address 1: " << shptr1 << endl;
        cout << "Pointers Cant: " << shptr1.use_count() << endl << endl;

        {
            shared_ptr<MyClass> shptr2 = shptr1;
            cout << "Memory Address 2: " << shptr2 << endl;
            cout << "Pointers Cant: " << shptr2.use_count() << endl << endl;
        }

        cout << "Pointers Cant: " << shptr1.use_count() << endl << endl;
    }*/

    weak_ptr<int> weptr1, weptr2;
    {
        shared_ptr<int> shptr1 = make_shared<int>(21);
        weptr1 = shptr1;
        weptr2 = shptr1;
        cout << "Pointers Cant: " << weptr1.use_count() << endl;
        cout << "Pointers Cant: " << weptr2.use_count() << endl << endl;
    }

    cout << "Pointers Cant: " << weptr1.use_count() << endl;
    cout << "Pointers Cant: " << weptr2.use_count() << endl << endl;


    return 0;
}