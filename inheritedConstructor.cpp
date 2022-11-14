// inheritedConstructor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>
class Base
{
private:
    int base;

public :
    Base()
    {
        cout << "\nI am constructor of Base\n";
    }
};

class Derived : public Base
{
private:
    int derived;

public:
    Derived()
    {
        cout << "\nI am constructor of Derived\n";
    }
};

///////////////////
// this is explicit calling
/////////////

class Base1
{
private:
    int base1;

public:
    Base1()
    {
        cout << "\nI am constructor of Base1\n";
    }
};

class Derived1 : public Base1
{
private:
    int derived;

public:
    Derived1() : Base1()
    {
        cout << "\nI am constructor of Derived1\n";
    }
};

int main()
{
    //Base bs1;
    Derived dr1;

    cout << "this is explicit calling";

    //Base1 bs2;
    Derived1 dr2;

    return 0;

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
