#include <iostream>
using namespace std;
inline int sqrd(int num)
{
    return num*num;
}
int main()
{
    int number = 5;
    int result = sqrd(number);
    cout<<"the result :"<<result;
    return 0;
}