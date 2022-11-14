#include <iostream>
using namespace std;

class Integer
{
private:
    int x;
public:
    void setData(int z) 
    { 
        x = z ;
    }

    void showData()
    {
        cout<<"\nThe integer is : "<<x<<"\n";
    }

    Integer operator++()
    {//pre-increment overload
        Integer temp;
        temp.x = ++x;
        return temp;

    }

    Integer operator++(int)
    {//ppst-increment overload
        Integer temp;
        temp.x = x++;
        return temp;

    }
};

int main()
{
    Integer i1;
    i1.setData(15);
    i1.showData();
    //pre-increment 
    Integer i2 = ++i1;
    i2.showData();

    Integer i3;
    i3.setData(456);
    Integer i4 = i3++;
    i4.showData();

    return 0;
}