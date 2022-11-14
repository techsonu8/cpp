#include <iostream>
using namespace std;
int area(int,int);
float area(float);
int main()
{
    int l = 5, b= 10;
    float r = 3.14;

    cout<<"Area of rectangle is : "<<area(l,b)<<"\n";

    cout<<"The are of circle is : "<<area(r)<<endl;


    return 0;
}

int area(int l,int b)
{
    return (l*b);
}

float area(float r)
{
    return (3.14*r*r);
}