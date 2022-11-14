#include <iostream>
using namespace std;

class A
{
public:
    void f1()
    {
        cout<<"I am F1 from class A"<<endl;
    }

    virtual void f2()
    {
        cout<<"I am F2 from class A"<<endl;
    }

    virtual void f3()
    {
        cout<<"I am F3 from class A"<<endl;
    }

    virtual void f4()
    {
        cout<<"I am F4 from class A"<<endl;
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

   //f3 is inherited

    void f4(int x) ////method hiding
    {
        cout<<"I am F4 from class B and int's value is : "<< x <<endl;
    }
};

int main()
{
    A obj;
    A* ptr = &obj;
    ptr->f1();
    ptr->f2();
    ptr->f3();
    ptr->f4();

    //these were normal
    cout<<"now we will go deep"<<endl;
    A* ptr2;
    B ObjB;
    // base class pointer derived class object
    ptr2 = &ObjB;

    

    ptr2->f1();  
    // f1 is not virtual ...so early(compile-time binding)... so f1 of parent(class A) will be called bcoz of pointer

    ObjB.f1();
    // if called by an object of B ...f1 of B will be called...method overriding

    ptr2->f2();
    // f2 is virtual ...so late binding ...run time binding ....f2 of child class i.e. B's f2 will be called

    ptr2->f3();
    // f3 is not defined in B at all....but present in B bcoz of inheritance ....so A's f3 will be called...No Rocket Science

    ObjB.f4(5);
// this is obj and not a pointer ...so B's F4 is visible....f4 is parameterised....f4 of A is Hided...

    ptr2->f4();
// pointer is of type A....cant call f4 of B
    return 0;
}