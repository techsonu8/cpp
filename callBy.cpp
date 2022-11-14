#include <iostream>
using namespace std;

int callByValue(int,int);
int callByAddress(int*,int*);
int callByReference(int&,int&);

int main()
{
    int a = 5, b=10;
    int resultCallByValue = 0;

    resultCallByValue = callByValue(a,b);
    cout<<"Addition : "<<resultCallByValue<<" and This is the addition from callByValue...we cant change actual variables\n";

    int resultCallByAddress = 0;
    resultCallByAddress = callByAddress(&a,&b);
    cout<<"Addition : "<<resultCallByAddress<<" and This is the addition from callByAddress...we can change actual variables\n";
    
    int resultCallByReference = 0;
    resultCallByReference = callByReference(a,b);
    cout<<"Addition : "<<resultCallByReference<<" and This is the addition from callByReference...we can change actual variables\n";

    cout<<"\nwe are in the main a: "<<a<<" an the b :"<<b;

    return 0;
}

int callByValue(int num1,int num2)
{
    int result = num1 + num2;
    // we cant change actual variable which are present in main function
    return result;
}


int callByAddress(int* ptr1, int* ptr2)
{
    int result = *ptr1 + *ptr2;
    // we can change actual variable which are present in main function
    // *ptr1 = 50;

    return result;
}

int callByReference(int& name1,int& name2)
{
    int result = name1 + name2;
    // we can change actual variable which are present in main function
    // name1 = 57;

    return result;
}