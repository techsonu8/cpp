// Complex.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Complex
{
private:
    int real, img;

public:

    //implemnet operator + here pleaseeeeeeee
    // friend in public private protected does not matter
    friend istream& operator>>(istream&, Complex&);
    friend ostream& operator<<(ostream&, Complex&);
};

istream& operator>>(istream& in, Complex& comp)
{
    cout << "\nPlease enter real part\n";
    in >> comp.real;
    cout << "\nEnter imaginary part\n";
    in >> comp.img;
    return in;
}

ostream& operator<<(ostream& out, Complex& comp)
{
    out << "\n" << comp.real << " + " << comp.img<< " j";
    return out;
}

int main()
{
    std::cout << "Hello World!\n";
    Complex C1;
    cin >> C1;
    cout << C1;
    
    return 0;
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
