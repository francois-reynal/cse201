#pragma once
#include<iostream>
#include<cmath>

class Complex {
private:
    double real;        // the real part
    double imaginary;   // the imaginary part

public:
    // construct the complex number zero
    Complex();

    // construct a complex number with given real and imaginary parts
    Complex(double real, double imaginary);
    //destructor
    ~Complex();
    //get the real part of the complex
    double getReal();
    // get the imaginary part of the number
    double getImaginary();
    // set the value of the real part
    void setReal(double re);
    // set the value of the imaginary part
    void setImaginary(double im);
    // computes the distance from the complex origin

    double magnitude();          
    /*
   modifies the number so its magnitude becomes 1
   but it stays in the same direction from the complex origin, if possible. In other
   words, project the original number onto the unit circle. If that operation is not possible, the complex number must be left unchanged.
    */
    void normalize();
};
