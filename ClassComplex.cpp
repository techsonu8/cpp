#include <iostream>
using namespace std;


class Complex
{
private:
    int real, img;

public:
    void input(int,int); // this is not inline by default 
    
    void output()
    {
        cout<<"The complex number is : "<<real<<" + "<<img<<" i";
    }
};

// member function of class Complex       :: is scope resolution     and Complex is membership label
void Complex :: input(int x,int y)
{
    real = x;
    img = y;
}


class complex
{
private:
    int real, img;

public:
    // void input()
    // {
    //     cout<<"Enter real part of complex number \n";
    //     cin>>real;
    //     cout<<"Now enter imaginary part \n";
    //     cin>>img;
    // }
    
    void input(int x, int y)
    {   //by deafalut this is inline
        real=x; img=y;
    }
    
    void output()
    {
        cout<<"The complex number is : "<<real<<" + "<<img<<" i";
    }
};



int main()
{
    int a,b;
    complex c1;
    cout<<"Enter real and img part for the complex number\n";
    cin>>a>>b;
    c1.input(a,b);
    c1.output();

    cout<<"\n\nanother class Complex"<<endl;
    Complex comp1;
    cout<<"Enter real and img part for the complex number"<<endl;
    cin>>a>>b;
    comp1.input(a,b);
    comp1.output();

    return 0;
}

