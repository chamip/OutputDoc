// 类模版比较特殊，因为在编译前需要用定义的类型来替代类型占位符所以类的定义和实现必须都是可见的。
// 解决方法也很简单，将类的定义和实现都写在头文件里就行了。

#include <iostream>

struct job
{
    char name[33];
    int age;
    float height;
};

template <typename T>
// void Swap(T& a, T& b);
void Swap(T& a, T& b) {
    T tmp = a;
    a = b;
    b = tmp;
}

//template<> void Swap<job>(job& a, job& b){}
template<> void Swap(job& a, job& b) {
    int ageTem = a.age;
    a.age = b.age;
    b.age = ageTem;
    float heightTem = a.height;
    a.height = b.height;
    b.height = heightTem;
}template<> void Swap(job&, job&);


void Show(job& j) {
    using namespace std;
    cout << j.name << "/age: " << j.age << "/height: " << j.height << endl;
}void Show(job&);
