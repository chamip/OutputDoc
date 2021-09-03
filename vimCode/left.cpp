/*
* author: chamip
* date: 2021.08.24
* 
* note:
* Default parameters in function.
*/
#include <iostream>
#include <cstring>

//Function overloading(Polymorphism)
char* left(const char* str, int n = 1);
unsigned long left(unsigned long num, unsigned count);
// unsigned long left(unsigned long, unsigned);

const int MaxSize = 100;

int main()
{
    using namespace std;

    //test of: char* left(const char* str, int n = 1);
    char sample[MaxSize];
    cin.get(sample, MaxSize);
    char* cur = left(sample, 3);
    cout << "cur is: " << cur << endl;
    delete[] cur;
    cur = left(sample);
    cout << "cur is: " << cur << endl;
    delete[] cur;
    cout << endl;

    //test of: unsigned long left(unsigned long, unsigned);  
    unsigned long num = 12345678;
    unsigned count = 3;
    unsigned long ans = left(num, count);
    cout << "ans: " << ans << endl;

    return 0;
}

char* left(const char* str, int n) {
    if(n < 0) {
        n = 0;
    }
    int len = strlen(str);
    n = (n < len) ? n : len;
    char* ptr = new char[n + 1];
    for(int i = 0; i < n; i++) {
        ptr[i] = str[i];
    }
    ptr[n] = '\0';
    return ptr;
}

unsigned long left(unsigned long num, unsigned count) {
    if(count == 0 || num == 0) {
        return 0;
    }
    int digit = 1;
    unsigned long n = num;
    while(n /= 10) {
        digit++;
    }
    if(count < digit) {
        count = digit - count;
        while(count--) {
            num /= 10;
        }
    }
    return num;
}