#include <iostream>
using namespace std;
class A;
class B;
// for 
class A
{
private:
    int a;
public:
    void setData(int x)
    {
        a = x;
    }

    friend void fun(A,B);
};

class B
{
private:
    int b;
public:
    void setData(int y)
    {
        b = y;
    }

    friend void fun(A,B);
};

void fun(A a1, B b1)
{
    // No direct access ...through caller object only
    // here this is freind function and can access both the class to whom it is friend
    int temp = a1.a + b1.b;
    cout<<"\nAddition is :"<< temp <<"\n";
}

int main()
{
    A obj1;
    B obj2;
    obj1.setData(10);
    obj2.setData(20);
    fun(obj1,obj2);
    return 0;
}