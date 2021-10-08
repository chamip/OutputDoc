#include <iostream>

class Shape {
    protected:
        int width;
        int height;
    public:
        void setWidth(int w) {
            width = w;
        }
        void setHeight(int h) {
            height = h;
        }
};

class PaintCost {
    public:
        int getCost(int area) {
            return 2 * area;
        }
};

class Rectangle: public Shape, public PaintCost {
    public:
        int getArea() {
            return height * width;
        }
};

int main()
{
    Rectangle rec;
    rec.setHeight(2);
    rec.setWidth(3);
    std::cout << "Total area: " << rec.getArea() << std::endl;
    std::cout << "Total cost: " << rec.getCost(rec.getArea()) << std::endl;
    return 0;
}