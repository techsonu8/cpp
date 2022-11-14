// basicFriend.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Complex;

class Complex
{
private:
    int real;
    int img;
public:
    void setData()
    {
        cout << "Enter real part\n";
        cin >> real;
        cout << "Enter imaginary part\n";
        cin >> img;
    }

    void showData()
    {
        cout << "The complex number is :\n";
        cout << real << " + " << img << " j\n";
    }

    friend void display(Complex);
};

void display(Complex temp)
{
    cout << "I am from friend fun... I can access private member\n";
    cout << temp.real << " + " << temp.img << " j\n";
}

int main()
{
    std::cout << "Hello World!\n";
    
    Complex C1;
    C1.setData();
    C1.showData();
    
    Complex C2 = C1;
    display(C2);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
