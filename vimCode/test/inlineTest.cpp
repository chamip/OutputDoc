#include <iostream>

class Base
{
private:
    /* data */
public:
    Base() {};
    virtual ~Base() {};
    inline virtual void test() {
        std::cout << "I am Base class." << std::endl;
    }
};

// Base::Base()
// {
// }

// Base::~Base()
// {
// }

class Derived : public Base
{
private:
    /* data */
public:
    Derived() {};
    ~Derived() {};
    inline void test() {
        std::cout << "I am Derived class." << std::endl;
    }
};

// Derived::Derived()
// {
// }

// Derived::~Derived()
// {
// }

int main()
{
    // 此处的虚函数 who()，是通过类（Base）的具体对象（b）来调用的，编译期间就能确定了，所以它可以是内联的，但最终是否内联取决于编译器。 
    Base base;
    base.test();
    std::cout << "-------" << std::endl;

    // 此处的虚函数是通过指针调用的，呈现多态性，需要在运行时期间才能确定，所以不能为内联。  
    Base * ptr = new Derived();
    ptr->test();

    // 因为Base有虚析构函数（virtual ~Base() {}），所以 delete 时，会先调用派生类（Derived）析构函数，再调用基类（Base）析构函数，防止内存泄漏。
    delete ptr;
    ptr = nullptr;

    // system("pause");
    return 0;
}