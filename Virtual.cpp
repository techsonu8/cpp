#include <iostream>
using namespace std;

class A
{
public:
    void f1()
    {
        cout<<"I am F1 from class A"<<endl;
    }

    virtual void fun() //dynamic ...runtime binding ....late binding
    {
        cout<<"I am fun from A"<<endl;
    }

};


class B : public A
{
public:
    void f1()
    {
        cout<<"I am F1 from class B"<<endl;
    }

    void f2()
    {
        cout<<"I am F2 from class B"<<endl;
    }

    void fun() //dynamic ...runtime binding ....late binding
    {//no need to redeclare as virtual

        cout<<"I am fun from B"<<endl;
    }
};

int main()
{
    A objA;
    objA.f1();
    //normal

    B objB1;
    objB1.f1();
    //normal
    objB1.f2();
    //normal

    A* ptr;
    ptr = &objA;
    ptr->f1();
    //still normal

    cout<<"now see..."<<endl;

    A* ptr2;
    B obj;
    ptr2 = &obj;  /// base class pointer derived class object
    ptr2->f1();
    //compiler see type of ptr2 which is A and calls the functuion of A...early binding 
    //bcoz we dont know its address at compile time

    //slution is ake that function as Virtual
    ptr2->fun();
    return 0;
}