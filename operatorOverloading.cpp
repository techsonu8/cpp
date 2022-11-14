#include <iostream>
using namespace std;

class complex ///normal
{
private:
    int real, img;

public:
    void input()
    {
        cout<<"Enter real part of complex number \n";
        cin>>real;
        cout<<"Now enter imaginary part \n";
        cin>>img;
    }
    
    void output()
    {
        cout<<"The complex number is : "<<real<<" + "<<img<<" i"<<endl;
    }

    complex add(complex temp)
    {
        complex result;
        result.real = real + temp.real;
        result.img = img + temp.img;
        return result;
    }

   complex add(complex temp1, complex temp2)
    {
        complex result;
        result.real = temp1.real + temp2.real;
        result.img =temp1.img + temp2.img;
        return result;
    }
};

class Complex    // in this I will overlaod the operator +    this is compile time polymorphism
// cant overload          sizeof  and         ? :   i.e. ternary operstor
{
private:
    int real, img;

public:
    void input()
    {
        cout<<"Enter real part of complex number \n";
        cin>>real;
        cout<<"Now enter imaginary part \n";
        cin>>img;
    }

    void output()
    {
        cout<<"The complex number is : "<<real<<" + "<<img<<" i"<<endl;
    }

    Complex operator+(Complex c)
    {
        Complex cc;
        cc.real = real + c.real;
        cc.img = img + c.img;
        return cc;
    }

};
 


int main()
{
    //normal complex
    complex c1;
    c1.input();
    c1.output();

    complex c2;
    c2.input();
    c2.output();

    complex c3 = c1.add(c2);
//OR complex c3 = c2.add(c1);
    cout<<"the addtion is :"<<endl;
    c3.output();


    /*  
    complex c4;
    c4 = add(c1,c2);
    */


   cout<<"now operator overloading\n";

   Complex C1, C2, C3;
    C1.input();
    C1.output();

    cout<<"second is \n";
    C2.input();
    C2.output();

    cout<<"C3 will get the result\n";
    
    // C3 = C1.operator+(C2);         // c1 is caller here
    // C3 = C2.operator+(C1);       // c2 is caller here

    C3 = C1 + C2;

    C3.output();
    
    return 0;
}