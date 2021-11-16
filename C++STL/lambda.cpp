#include <iostream>

void lambda() {
    int id = 1;
    auto f = [id] () mutable {
        std::cout << "id: " << id << std::endl;
        id++;
    };
    id = 42;
    f();
    f();
    f();
    std::cout << "id: " << id << std::endl;
    return ;
}
int main()
{
    lambda();
    return 0;
}