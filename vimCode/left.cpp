/*
* author: chamip
* date: 2021.08.24
* 
* note:
* Default parameters in function.
*/

#include <iostream>
#include <cstring>

char* left(const char* str, int n = 1);

const int MaxSize = 100;

int main()
{
    using namespace std;
    char sample[MaxSize];
    cin.get(sample, MaxSize);
    char* cur = left(sample, 3);
    cout << "cur is: " << cur << endl;
    delete[] cur;
    cur = left(sample);
    cout << "cur is: " << cur << endl;
    delete[] cur;     
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
