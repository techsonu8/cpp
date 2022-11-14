#include <iostream>
using namespace std;
/*
default ....its by compiler

if user creates at-least once---> default is not called
types
1)implicit/ default
2)parameterised
3)overloading
*/
class complex
{
private:
    int real, img;

public:
    complex()
    {
        real = 0;
        img = 0;
        cout<<"this user-defined constructor and its over-loaded\n";
    }

    // overloading of constructor has been already started
    complex(int x,int y)
    {
        real = x;
        img = y;
        cout<<"\nthis is all parametrised constructor\n";
    }

    complex(int k)
    {
        real = k;
        cout<<"\nthis is single parametrised constructor\n";
    }

    void show()
    {
        cout<<"The number is : "<<real<<" + "<<img<<" i"<<endl;
    }
};

int main()
{
    cout<<"main starts here\n";
    complex c1;
    cout<<"i am from main and c1 is created and default constructor is called\n";
    c1.show();


// there aremany types we can create and call
    complex c2(23);
    c2.show();

    complex c3(23,6);
    c3.show();

    complex c4 = complex(23,6);

    complex c5 = 23;

    complex c6(c5);
    //default copy constructor;

    return 0;
}