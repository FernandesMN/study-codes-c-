#include <iostream>
#include "complex.h"

void Complex::show(){
    std::cout<<"R = " << real << " + " << imag << 'i' <<std::endl;
}