#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> vec;
    int n;
    std::string str;
    std::cout << "Please input n of vector size: ";
    std::cin >> n;
    while(n > 0 && std::cin >> str) {
        vec.push_back(str);
        n--;
    }
    for(auto &i : vec) {
        for(auto &j : i) {
            if(islower(j)) {
                j = toupper(j);
            }
        }
    }
    for(auto k : vec) {
        std::cout << k << std::endl;
    }
    return 0;
}