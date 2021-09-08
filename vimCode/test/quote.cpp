/*
* author: chamip
* date: 2021.08.24
* 
* note:
* Compile solution of c++:
* g++ quote.cpp ... -o quote
*/
#include <iostream>

//prototype
void testQuote();

int main()
{
    using namespace std;
    cout << "hello1111" << endl;
    testQuote();
    return 0;
}

void testQuote() {
    using namespace std;

    int rat = 101;
    int* ptr = &rat;
    int& rodent = *ptr;
    cout << "rat: " << rat << "/rat address: " << &rat << endl;
    cout << "*ptr: " << *ptr << "/*ptr address: " << ptr << endl;
    cout << "rodent: " << rodent << "/rodent address: " << &rodent << endl;
    
    int bunnies = 50;
    //The point of the pointer ptr has changed, but the reference remains the same.
    ptr = &bunnies;
    cout << "rat: " << rat << "/rat address: " << &rat << endl;
    cout << "*ptr: " << *ptr << "/*ptr address: " << ptr << endl;
    cout << "rodent: " << rodent << "/rodent address: " << &rodent << endl;
     
    return ;
}