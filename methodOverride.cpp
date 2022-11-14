// methodOverride.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class A
{
private:
	int a;

public:
	void setData(int a)
	{
		cout << "this is from A" << endl;
		this->a = a;
	}

	void fun() //method hiding
	{
		cout << "fun of A" << endl;
	}
	void foo() //method overriding
	{
		cout << "this is foo function and its from A" << endl;
	}

};

class B : public A
{
private:
	int b;

public:
	void setData(int b)
	{
		cout << "this is from B" << endl;
		this->b = b;
	}
	void fun(int k) /////method hiding
	{
		cout << "fun of B  "<<k<<endl;
	}

	void foo( )  ///method overriding
	{
		cout << "this is foo function and its from B" << endl;
	}
};
int main()
{
    std::cout << "Hello World!\n";
	B obj1;
	obj1.foo(); // foo of B will be called

	obj1.fun();
	

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
