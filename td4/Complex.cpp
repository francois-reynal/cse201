#include "Complex.hpp"

    Complex::Complex(){
        real = 0.0;
        imaginary = 0.0;
    }

    // construct a complex number with given real and imaginary parts
    Complex::Complex(double real, double imaginary){
        this->real = real;
        this->imaginary = imaginary;
    }
    Complex::~Complex(){
        std::cout << "Destroying number" << real << " + " << imaginary << " * i"<<std::endl;
    }
    //get the real part of the complex
    double Complex::getReal(){
        return this->real;
    }
    // get the imaginary part of the number
    double Complex::getImaginary(){
        return this->imaginary;
    }
    // set the value of the real part
    void Complex::setReal(double re){
        this->real = re;
    }
    // set the value of the imaginary part
    void Complex::setImaginary(double im){
        this->imaginary = im;
    }
    // computes the distance from the complex origin

    double Complex::magnitude(){
        return sqrt(pow(real,2)+pow(imaginary,2));
    }
    /*
   modifies the number so its magnitude becomes 1
   but it stays in the same direction from the complex origin, if possible. In other
   words, project the original number onto the unit circle. If that operation is not possible, the complex number must be left unchanged.
    */
    void Complex::normalize(){
        int m = this->magnitude();
        if (m>1){
            this->real = this->real/m;
            this->imaginary = this->imaginary/m;
        }
        
    }