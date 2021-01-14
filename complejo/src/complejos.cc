#include "complejo.h"

int main(){
    Complex complejo1{2, 5};
    Complex complejo2{1,7};
    Complex complejo_final{0,0};

    complejo_final.suma(complejo1, complejo2);
    complejo_final.print();
    complejo_final.resta(complejo1, complejo2);
    complejo_final.print();
    complejo_final.mult(complejo1, complejo2);
    complejo_final.print();
    
}