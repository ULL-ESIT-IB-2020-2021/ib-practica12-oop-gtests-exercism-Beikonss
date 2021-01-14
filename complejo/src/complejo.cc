#include "complejo.h"

void Complex::suma(Complex complejo1, Complex complejo2){
  real = complejo1.real + complejo2.real;
  imag = complejo1.imag + complejo2.imag;
}

void Complex::resta(Complex complejo1, Complex complejo2){
  real = complejo1.real - complejo2.real;
  imag = complejo1.imag - complejo2.imag;
}

void Complex::mult(Complex complejo1, Complex complejo2){
  real = complejo1.real*complejo2.real - complejo1.imag*complejo2.imag;
  imag = complejo1.real*complejo2.imag;
}

void Complex::print(){
  std::cout << real << " + " << imag << "i" << std::endl; 
}


    
