#include <iostream>
using namespace std;
class Complex;
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

    friend Complex operator+(Complex, Complex);
    friend Complex operator-(Complex);

};

Complex operator+(Complex temp1, Complex temp2)
{//binary op overlaod
    Complex result;
    result.real = temp1.real + temp2.real;
    result.img = temp1.img + temp2.img;
    return result;
}

Complex operator-(Complex temp)
{//unary op overlaod
    Complex result;
    result.real = -temp.real;
    result.img = -temp.img;
    return result;
}

int main()
{
    Complex C1,C2,C3;
    C1.input();
    C2.input();
    C3 = C1 + C2;
    // C3 = operator+(C1,C2);
    C3.output();   

    Complex C4;
    C4 = -C3;
    C4.output();

    return 0;
}