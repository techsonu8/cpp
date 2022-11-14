#include <iostream>
using namespace std;

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

    complex(complex& c)
    {
        // this is user created-copy constructor and it uses reference
        real = c.real;
        img = c.img;
        cout<<"this is copy constructor\n";
    }
    /*
    this is wrong type ...it will create recursion
    complex(complex c)
    {
        // this is user created-copy constructor and it uses reference
        real = c.real;
        img = c.img;
        cout<<"this is copy constructor";
    }
    */
    void show()
    {
        cout<<"The number is : "<<real<<" + "<<img<<" i"<<endl;
    }
};

int main()
{
    cout<<"main starts here\n";
    complex c1(35,36);
    cout<<"i am from main and c1 is created and default constructor is called\n";
    c1.show();
    complex c2(c1);
    c2.show();

    return 0;
}

