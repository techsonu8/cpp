#include <iostream>
#include <cstring>
using namespace std;

struct book
{
    // bydefault public
    int bookId;
    char title[20];
    float price;
};

int main()
{
    book b1{100,"primer cpp",450.56}; //initialization
    book b2,b3;
    b2.bookId = 200;
    b2.price = 63.23;
    strcpy(b2.title,"let us c");
    //  this will be wrong
    // b2.title = "let us c";

    b3 = b1;
    // we can assign directly
    return 0;
}