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

    // destructor
    ~complex()
    {
        cout<<"hey I am from destructor";
    }

    /*
    // destructor
    this is default used by comppiler
    ~complex()
    {}
    

    */


    void show()
    {
        cout<<"The number is : "<<real<<" + "<<img<<" i"<<endl;
    }
};

int main()
{
    complex c1;
    return 0;
}