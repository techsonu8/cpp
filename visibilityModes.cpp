// visibilityModes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
/*
while inheritance

availability
accessibility

available to all but not accessible to all
*/

/*
2 types of user of class
    1) user 1 will create object of your class
    2) user 2 will derive class from your class

    i) private members are not accessible by user 1 and user 2
    ii) protected members are accessible by user 2 and not user 1
    iii) public  memberes are accessible by both the users..in fact all users
*/

class A
{
private:

protected:

public:

};

class B : protected A
{
private:

protected:

public:

};

class C : ....B
{

};
/*
while inheritance

availability
accessibility

available to all but not accessible to all
*/

/*
2 types of user of class B
    1) user 1 will create object of your class
    2) user 2 will derive class from your class

    i) private members are not accessible by user 1 and user 2
    ii) protected members are accessible by user 2 and not user 1
    iii) public  memberes are accessible by both the users..in fact all users
*/

/*visibility modes think of only user  of class B
public private protected

protected and public member

to class C ...its clear which that which member of class B are private / public / protected
but to class C ..its not clear about behaviour of protected and public members of A 

*/
int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
