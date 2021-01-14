#ifndef COMPLEJO_H
#define COMPLEJO_H
#include <iostream>
#include <algorithm>

class Complex { 
private: 
    int real, imag; 
public: 
    Complex(int r = 0, int i =0)  {real = r;   imag = i;} 

    void suma(Complex complejo1, Complex complejo2);
    void resta(Complex complejo1, Complex complejo2);
    void mult(Complex complejo1, Complex complejo2);

    void print(); 

}; 
  
#endif 

