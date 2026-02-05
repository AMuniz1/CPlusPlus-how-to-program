#include <iostream>
using std::cout;
class Complex{
    private:
        double real;
        double img;
    public:
        Complex(double r=0, double i=0){
            setComplex(r,i);
        }
        Complex( Complex &c){
            real = c.real;
            img = c.img;
        }

        //setters
        void setReal(double r){
            real = r;
        }
        void setImag(double imag){
            img = imag;
        }
        void setComplex(double r, double i){
            real = r;
            img = i;
        }
        //getters
        double getReal() const{
            return real;
        }
        double getImg() const{
            return img;
        }
        // methods
        friend std::ostream& operator<<(std::ostream& os, const Complex& c) {
                os << c.real;
                if (c.img >= 0)
                    os << "+";
                os << c.img << "i";
                return os;
        }
        Complex operator+(const Complex& x) const{
            Complex temp;
            temp.real = real + x.real;
            temp.img = img + x.img;
            return temp;
        }
        Complex operator-(const Complex& x) const{
            Complex temp;
            temp.real = real - x.real;
            temp.img = img - x.img;
            return temp;
        }
        Complex operator*(const Complex& x) const{
            Complex temp;
            temp.real = real * x.real - img * x.img;
            temp.img = real * x.img + img * x.real;
            return temp;
        }
        Complex conjugate() const{
            return {real, -img};
        }

        Complex operator/(const Complex& x) const{
            double denom = x.real * x.real + x.img * x.img;
            Complex num = (*this) * x.conjugate();
            return {num.real/denom, num.img/denom};
        }

};
