#include <iostream>
using namespace std;

/*
instance member variable also known as
-> data member  -> field
-> attribute   -> properties

 instance member functions also known as
-> methods  -> procedures
-> actions   -> operations
-> services

*/

class Box
{
    int length, breadth, height;
    //these are instance member variable
    //depends on individual object ....separate for each instance

    //by defalut all methods are private...we have to make it public
    public: void setDimention(int length, int breadth, int height)
    {
        // this.height = height;
        this->length = length;  
        this->breadth = breadth;
        this->height = height;
        // this is instance member function
        // not a class member function
    }

    void showDimentions()
    {
        cout<<"The length is : "<<this->length<<" , breadth is : "<<this->breadth<<" and height is : "<<this->height<<"\n";
    }


    /*
    class member function and class member variable are 
    static ...same for all instances
    */
};

int main()
{
    Box b1;
    // b1 is object i.e. object b1 is instance of class Box
    cout<<"Enter the details of the box B1 as per details :"<<"length, breadth, heigth";
    int l,b,h;
    cin>>l>>b>>h;
    b1.setDimention(l,b,h);
    cout<<"I think Box B1 has saved";
    b1.showDimentions();

    Box b2 = b1;//we can assign object directly
    return 0;
}