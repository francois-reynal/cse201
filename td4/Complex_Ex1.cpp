#include<iostream>

class Complex {
private:
  double real;        // the real part
  double imaginary;   // the imaginary part

  public:
    // construct the complex number zero
    Complex(){
        real = 0.0;
        imaginary = 0.0;
    };

    // construct a complex number with given real and imaginary parts
    Complex(double real, double imaginary){
        this->real = real;
        this->imaginary = imaginary;
    };
    ~Complex(){
        std::cout << "Destroying number" << real << " + " << imaginary << " * i"<<std::endl;
    }
};
int main(){
    Complex first;
    Complex second = Complex(3.0,0);
    Complex third = Complex(1.0,2.0);
}