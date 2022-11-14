#include <iostream>
using namespace std;

struct book
{
    // bydefault public
    int bookId;
    char title[20];
    float price;

    void input()
    {
        cout<<"Enter book info 1.BookId 2.Title and 3.Price<<"<<endl;
        cin>>bookId>>title>>price;
    }

    void output()
    {
        cout<<"The book information is BookId:"<<bookId<<" Title :"<<title<<" and its price is "<<price<<"\n";
    }
};


int main()
{
    cout<<endl<<endl;
    book b1{100,"primer cpp",423.36};
    b1.output();

    cout<<"Now we will create another\n";

    book b2;
    b2.input();
    b2.output();

    return 0;
}