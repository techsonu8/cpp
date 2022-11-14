#include <iostream>
using namespace std;
/*
initialization of objecgt
same as class name and body like function but no return type
default ....its by compiler


if user creates at-least once---> default is not called
types
1)implicit/ default
2)parameterised
3)overloading
*/
class complex
{
private:
    int real, img;

public:
    complex()
    {
        cout<<"this is default/implicit constructor and its over-loaded\n";
    }

};

int main()
{
    cout<<"main starts here\n";
    complex c1;
    cout<<"i am from main and c1 is created abd default constructor is called";
    return 0;
}