#include <cmath>
class Rectangle{
    private:
        int length;
        int breadth;
    public:
        Rectangle(int l = 1, int b = 1){
            setLength(l);
            setBreadth(b);
        }
        Rectangle (const Rectangle & rect){
            length = rect.length;
            breadth = rect.breadth;
        }
        void setLength(int l){
            if (l < 0)
                l = 1;
            else
                length = l;
        }
        void setBreadth(int b){
            if (b < 0){
                b = 1;

            }
            else {
                breadth = b;
            }
        }
        int getLength() const{
            return length;
        }
        int getBreadth() const{
            return breadth;
        }
        int area() const{
            return breadth * length;
        }
        int perimeter() const{
            return 2 * (breadth + length);
        }
        double diagonal() const{
            return std::sqrt(length*length + breadth*breadth);
        }
        bool isSquare() const{
            if (length == breadth){
                return true;
            }
            else{
                return false;
            }
        }
};
