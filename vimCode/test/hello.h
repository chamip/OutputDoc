#include <iostream>
#include <string>

class Test {
    private:
        int _age;
        std::string _name;
    public:
        Test();
        Test(const std::string& name, int age);
        void show();
        ~Test();
};

Test::Test() {};

Test::Test(const std::string& name, int age) {
    _name = name;
    _age = age;
}
void Test::show() {
    std:: cout << _name << std::endl;
    std::cout << _age << std::endl;
}

Test::~Test() {};