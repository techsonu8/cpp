#include <iostream>
using namespace std;

class Box
{
private:
    int l, b, h;

public:

    /*
    this l b h will create confusion
    void setDim(int l, int b, int h)
    {
        l = l;
        b = b;
        h = h;
    }
    */
    void setDim(int l, int b, int h)
    {
        this->l = l;
        this->b = b;
        this->h = h;
    }
};

int main()
{
    // it uses arrow operator 
    // its class object pointer
    //
    return 0;
}