#include <iostream>
using namespace std;



class Complex    
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


    Complex operator-()
    { //unary operator overlaoding
        Complex temp;
        temp.real = -real;
        temp.img = -img;
        return temp;
    }


    Complex operator+(Complex c)
    { //binary operator overlaoding
        Complex cc;
        cc.real = real + c.real;
        cc.img = img + c.img;
        return cc;
    }

};
 


int main()
{
    
   cout<<"now  overloading\n";

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
    
    Complex C4;
    C4.input();
    C4.output();
    Complex C5;
    C5 = -C4;
    C5.output();
    return 0;
}