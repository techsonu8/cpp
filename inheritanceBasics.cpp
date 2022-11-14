// inheritanceBasics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Car
{
    /*
    existing class
    parent class
    base class
    old class
    */

};
//
// public is the visibility mode here
class SportsCar : public Car
{
    /*
    modified class
    child class
    derived class
    new class
    */

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


/*
types : 5


1) _single/simple_inheritance
class A
{

};

class B : public A
{

};

-----------------------

2) multilevel inheritance
class A
{

};

class B : public A
{

};

class C : public B
{

};

-----------------

3) multiple inheritance
class A
{

};

class B 
{

};

class C : public B , public A
{

};

-----------------

4) hirarchiarl inheritance.....this is most popular
class A
{

};

class B : public A
{

};

class C : public A
{

};

class D : public A
{

};

5) hybrid inheritance
mixture
*/