#include <iostream>

class Box {
    private:
        double length;
        double breadth;
        double height;
    public:
        static int ObjectCount;
        Box(double l, double b, double h): length(l), breadth(b), height(h) {
            std::cout << "Constructor called." << std::endl;
            ObjectCount++;
        }
        double volume_of_box();
};

double Box::volume_of_box() {
    return length * breadth * height;
}

int Box::ObjectCount = 0;

int main()
{
    Box box1(1.0, 1.0, 1.0);
    Box box2(2.0, 2.0, 2.0);
    Box * ptrBox;
    ptrBox = &box1;
    std::cout << "Volume of box1: " << ptrBox->volume_of_box() << std::endl;
    ptrBox = &box2;
    std::cout << "Volume of box2: " << ptrBox->volume_of_box() << std::endl;
    std::cout << "ObjectCount: " << Box::ObjectCount << std::endl;
    return 0;
}