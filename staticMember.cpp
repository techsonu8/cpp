#include <iostream>
using namespace std;

class Account
{
private:
    int balance;
    static float roi;  //no memory allocation
    //static float roi=3.5f;
public:
    void setBalance(int b)
    {
        balance = b;
    }

    static void showROI()
    {
        //we have used the static member 
        cout<<"the rate of interst is : "<<roi;
    }

};
//memory allocation
float Account :: roi = 3.5 ;

int main()
{
    cout<<"we can call staic method without creating an object"<<endl;
    Account::showROI();
    return 0;
}