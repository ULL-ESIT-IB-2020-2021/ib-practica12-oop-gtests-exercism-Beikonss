#include "Complejo.h"

int main(){

    Complex c1(10, 5), c2(2, 4); 
    Complex c3 = c1 * c2;
    Complex c4(2, 5), c5(3,6);
    Complex c6 = c4 + c5;
    Complex c7(7, 1), c8(6, 9);
    Complex c9 = c7 - c8;
    c3.print(); 
    c6.print();
    c9.print();

    Complex b1(10,0), b2(2,1);
    Complex b3 = b1 + b2;
    b3.print();
    Complex b4(10,0), b5(5,0);
    Complex b6 = b4 - b5;
    b6.print();
    Complex b7(0,5), b8(2,0);
    Complex b9 = b7 * b8;
    b9.print();

return 0;



}