#include <iostream>
using namespace std;

int main()
{
    int number = 5;
    int *ptr = &number;

    cout<<"The number is :"<<number<<"\n";

    cout<<"The number through pointer is "<<*ptr<<"\n";


    int &ref = number;
    //   ref is another name
    // we cant change once we declare


    cout<<"The number through reference is "<<ref<<"\n";

    cout<<"We can change the actual number through ref\n";
    ref = 50;
    cout<<"The number through reference is "<<ref<<"\n";

    int num = 60;
    cout<<"The num is "<<num<<"\n";
    ptr = &num;
    // but we can update the ptr
    cout<<"The num through ptr is "<<*ptr<<"\n";


    return 0;
}