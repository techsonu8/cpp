// refReturn.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int& demo(int& a)
{
    a = 10;
    return a;
}

int main()
{
    std::cout << "Hello World!\n";
    int x = 55;

    cout << "\nthe value of x is i.e. x = " << x;
    cout << "\nthe address of x i.e. &x = " << &x;
    cout << "\nreturn by refernce\n";

    cout << "the address of a x and returnByRefernce variable is same i.e " << & demo(x);

    /// try to return a reference of a glaobal variable
    ////  demo(x) can be used as an variable
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
