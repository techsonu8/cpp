// memberFriend.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class A
{
public:
    void function()  // this can be friend of class B
    {
        cout << "this is member of class A";
    }
};

class B
{
    /*
    this is wrong declaration
    we dont know exactly which is this function()
    friend void function();
    use scope resolution
    */
    friend void A :: function();
};

void funcion()
{
    cout << "global function";
}

class C
{
public: // we want to make aal the member function of C are friend of D
    void foo()
    {
        cout << " I am foo and member of C";
    }

    void f1()
    {
        cout << "i am f1 and from C";
    }

};

class D
{
    friend class C;
    // here function foo and f1 are friend of D and member of C
};

int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
