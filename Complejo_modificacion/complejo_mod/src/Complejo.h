#ifndef COMPLEX
#define COMPLEX
 

#include <algorithm>
#include <iostream>
#include <vector>
#include <iostream>
#include <iomanip>
#include <cstdlib>

class Complex { 
private: 
    int real, imag; 
public: 
    Complex(int r = 0, int i =0)  {real = r;   imag = i;} 

    void suma(Complex complejo1, Complex complejo2);
    void resta(Complex complejo1, Complex complejo2);
    void mult(Complex complejo1, Complex complejo2);

    Complex operator + (Complex const &obj) { 
         Complex sum; 
         sum.real = real + obj.real; 
         sum.imag = imag + obj.imag; 
         return sum; 
    } 
    Complex operator - (Complex const &obj){
        Complex res;
        res.real = real - obj.real;
        res.imag = imag - obj.imag;
        return res;
    }

    Complex operator * (Complex const &obj){
        Complex mult;
        mult.real = real*obj.real - imag*obj.imag;
        mult.imag = real*imag;
        return mult;
    }

    void print(); 

}; 
  
#endif