#include <iostream>
#include "Rectangle.h"

class Prism{
    private:
        Rectangle base;
        int height;
    public:
        Prism(int l=1, int b=1, int h=1)
            : base(l,b), height(h)
        {

        }
        Prism (const Prism & other)
            : base(other.base), height(other.height)
        {

        }
        void setHeight(int h){
            height = h;
        }
        int getHeight() const{
            return height;
        }
        int volume() const{
            return base.area() * height;
        }
        int surfaceArea() const{
            return 2 * base.area() + 2 * base.perimeter() * height;
        }
        bool isCube() const{
            if (base.isSquare() && height == base.getLength()){
                return true;
            }
            else{
                return false;
            }
        }
}
